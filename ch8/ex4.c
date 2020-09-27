// Program to calculate the number of days between two user entered dates

#include <stdio.h>
#include <stdbool.h>

struct date{
    int month, day, year;
};

// Function to find the number of days in a month

int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if(isLeapYear (d) == true && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

// Function to determine if it's a leap year

bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if( (d.year % 4 == 0 && d.year % 100 != 0) ||
                d.year % 400 == 0)
        leapYearFlag = true;
    else
        leapYearFlag = false; 

    return leapYearFlag;
}

struct date getDate(struct date d)
{
    do 
    {
        printf("Please enter a date (mm/dd/yyyy): ");
        scanf("%i/%i/%i", &d.month, &d.day, &d.year); 

        if(d.day > numberOfDays(d) || d.day < 1)
            printf("Error! Please re-enter in a valid date\n");

    }while(d.day > numberOfDays(d) || d.day < 1);

    return d;
}

int getN (struct date d)
{
    int n, f, g;

    if(d.month <= 2) 
        f = d.year - 1;
    else
        f = d.year;

    if(d.month <= 2) 
        g = d.month + 13;
    else 
        g = d.month + 1;


    n = (1461 * f) / 4 + (153 * g) / 5 + d.day;

    return n;
}

int getDayOfWeek(int n)
{
    int day;

    day = (n - 621049) % 7;

    return day;
}

int main(void)
{
    struct date date1;
    int n = 0, d;

    date1 = getDate(date1);
   
    n = getN(date1);

    printf("%i\n", n);
    d = getDayOfWeek(n);

    switch(d){
        case 0:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Sunday");
            break;
        case 1:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Monday");
            break;
        case 2:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Tuesday");
            break;
        case 3:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Wednesday");
            break;
        case 4:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Thursday");
            break;  
        case 5:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Friday");
            break;
        case 6:    
            printf("The number of days between %i/%i/%i falls on a %s.\n",
             date1.month, date1.day, date1.year, "Saturday");
            break;
    }

    return 0;
}