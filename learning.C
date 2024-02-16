#include <stdio.h>
int main()
{
    int value = 3;
    int *pValue = &value;

    printf("%p\n", &value);
    printf("%p\n", pValue);
    return 0;
}
