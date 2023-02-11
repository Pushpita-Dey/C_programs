
#include <stdio.h>
int main()
{
    int choice;
    float temperature, converted_temperature;
    printf("Temperature converter menu:\n ");

    printf("\n 1. Fahrenheit to Celsius \n");
    printf("\n 2. Celsius to Fahrenheit \n");
    printf("\n Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("\n Enter the Fahrenheit temperature: ");
        scanf("%f",& temperature);
        converted_temperature = (temperature-32)/1.8;
        printf("\n The temperature in Celsius is :%.3f\n",converted_temperature);

    }
    case 2:
    {
        printf("\n Enter the Celsius temperature: ");
        scanf("%f",& temperature);
        converted_temperature = (1.8*temperature)+32;
        printf("\n The temperature in Fahrenheit is :%.3f\n",converted_temperature);
        break;
    }

    default:
        printf("Not a correct option");
    }
    return 0;
}

