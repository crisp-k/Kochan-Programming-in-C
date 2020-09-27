// Program to determine tomorrow's date

#include <stdio.h>
#include <stdbool.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct date
{
    int month, day, year;
};

struct dateAndTime
{
    struct date date;
    struct time time;
};

struct dateAndTime dateUpdate (struct dateAndTime today)
{
    struct dateAndTime tomorrow;

    int numberOfDays(struct date d);

    if(today.date.day != numberOfDays(today.date)){
        tomorrow.date.day = today.date.day + 1;
        tomorrow.date.month = today.date.month;
        tomorrow.date.year = today.date.year;
    }
    else if(today.date.month == 12){
        tomorrow.date.day = 1;
        tomorrow.date.month = 1;
        tomorrow.date.year = today.date.year + 1;
    }
    else
    {
        tomorrow.date.day = 1;
        tomorrow.date.month = today.date.month + 1;
        tomorrow.date.year = today.date.year;
    }

    return tomorrow;
}

// Function to update the time by one second

struct dateAndTime timeUpdate (struct dateAndTime now)
{
    ++now.time.seconds;

    if(now.time.seconds == 60){
        now.time.seconds = 0;
        ++now.time.minutes;

        if(now.time.minutes == 60){
            now.time.minutes = 0;
            ++now.time.hour;

            if(now.time.hour == 24){
                now.time.hour = 0;
                now = dateUpdate(now);
            }
        }
    }

    return now;
}

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

int main(void)
{
    struct dateAndTime thisTime, updatedTime;

    printf("Enter today's date (mm/dd/yyyy)");
    scanf("%i/%i/%i", &thisTime.date.month, &thisTime.date.day,
            &thisTime.date.year);
    printf("and time (hh:mm:ss): ");
    scanf("%i:%i:%i", &thisTime.time.hour, &thisTime.time.minutes,
            &thisTime.time.seconds);

    updatedTime = timeUpdate(thisTime);

    printf("Updated time is: %i/%i/%i %i:%i:%i\n", updatedTime.date.month,
           updatedTime.date.day, updatedTime.date.year, updatedTime.time.hour,
           updatedTime.time.minutes, updatedTime.time.seconds);

    return 0;
}
