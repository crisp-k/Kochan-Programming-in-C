
// Progarm to calculate time passed between two user entered times

#include <stdio.h>

struct time
{
    int hours, minutes, seconds;
};

struct time getTime (struct time t, int num)
{
    int valid = 1;
    do 
    {
        printf("Enter time #%i (hh:mm:ss): ", num);
        scanf("%i:%i:%i", &t.hours, &t.minutes, &t.seconds);

        if(t.hours > 24 || t.hours < 0 || t.minutes > 60 ||
          t.minutes < 0 || t.seconds > 60 || t.seconds < 0)
              printf("Error! Please enter valid time \n");
        else 
            break;

    }while(valid == 1);

    return t;
}

struct time timeDifference(struct time t1, struct time t2, struct time timeE)
{
    int hours, minutes, seconds;

    hours = t2.hours - t1.hours;
    minutes = t2.minutes - t1.minutes;
    seconds = t2.seconds - t1.seconds;

    if(seconds < 0){
        timeE.seconds = seconds + 60;
        minutes -= 1;
    }
    else 
        timeE.seconds = seconds;
    
    if(minutes < 0){
        timeE.minutes = minutes + 60;
        hours -= 1;
    }
    else 
        timeE.minutes = minutes;

    if(hours < 0)
        timeE.hours = 24 + hours;
    else 
        timeE.hours = hours;


    return timeE;   
}

int main(void)
{
    struct time t1, t2, timeE;
    
    t1 = getTime(t1, 1);
    t2 = getTime(t2, 2);

    timeE = timeDifference(t1, t2, timeE);

    printf("Elapsed time: %i hours, %i minutes, and %i seconds\n", timeE.hours, timeE.minutes, timeE.seconds);

    return 0;
}