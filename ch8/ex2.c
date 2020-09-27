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


    n = 1461 * f / 4 + 153 * g / 5 + d.day;

    return n;
}

int main(void)
{
    struct date date1, date2;
    int n1, n2;

    date1 = getDate(date1);
    date2 = getDate(date2);

    n1 = getN(date1);
    n2 = getN(date2);

    printf("The number of days between %i/%i/%i and %i/%i/%i is: %i days\n",
                    date1.month, date1.day, date1.year, 
                    date2.month, date2.day, date2.year, (n2 - n1));

    return 0;
}