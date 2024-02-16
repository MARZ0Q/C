#include <stdio.h>
#include <ctype.h>

int main()
{
    double temp;
    char unit;
    printf("Input a Unit Of temprature (C) of (F) you want to convert:\n");
    scanf("%c", &unit);
    unit = tolower(unit);

    switch (unit)
    {
    case 'c':
        printf("Ok Enter the temprature in Celsius :\n");
        scanf("%lf", &temp);
        printf("Your temprature in Fahrenheit is : %lf \n", ((double)9 / 5 * temp) + 32);
        break;
    case 'f':
        printf("Ok Enter the temprature in Fahrenheit :\n");
        scanf("%lf", &temp);
        printf("Your temprature in Celsius is : %lf \n", (double)5 / 9 * (temp - 32));
        break;
    default:
        printf("Invalid unit bruh \n");
    }

    return 0;
}