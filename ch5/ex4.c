// Simple printing program
// input of:        number   operator

#include <stdio.h>

int main(void)
{
    float value1, total, runProg = 1;
    char operator;


    printf("Begin calculations\n");

    while(runProg == 1){
        scanf("%f %c", &value1, &operator);

        switch (operator){
        case 'S':
            total = value1;
            printf("= %f\n", total);
            break;
        case '+':
            total += value1;
            printf("= %f\n", total);
            break;
        case '-':
            total -= value1;
            printf("= %f\n", total);
            break;
        case '*':
            total *= value1;
            printf("= %f\n", total);
            break;
        case '/':
            if(value1 == 0){
                printf("Division by zero.\n");
                printf("= %f\n", total);
            }
            else{
                total /= value1;
                printf("= %f\n", total);
            }
            break;
        case 'E':
            runProg = 0;
            break;
        default:
            printf("Unknown operator.\n");
            printf("= %f\n", total);
        }
    }
    return 0;
}