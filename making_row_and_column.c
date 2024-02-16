#include <stdio.h>

int main()
{
    int column;
    int row;
    printf("Enter column number\n");
    scanf("%d", &column);
    printf("Enter row number\n");
    scanf("%d", &row);
    for (int i = 0; i < column; i++)
    {
        for (int i = 0; i < row; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
