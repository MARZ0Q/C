
#include <stdio.h>

int main()
{
    int range;
    printf("Enter the range of fibbonacchi number:\n");
    scanf("%d", &range);

    int x = 0;
    int y = 1;
    printf("Ok The numbers will be :\n");
    do
    {
        int z = x + y;
        printf("%d\n", x);
        x = y;
        y = z;

    } while (x < range);
}