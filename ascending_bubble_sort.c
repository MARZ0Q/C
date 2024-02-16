#include <stdio.h>

void bubbleAscendingSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

// The begining of Char sort funcs:
void bubbleCharAscendingSort(char arrayChar[], int sizeCharArr)
{
    for (int i = 0; i < sizeCharArr - 1; i++)
    {
        for (int j = 0; j < sizeCharArr - 1; j++)
        {
            if (arrayChar[j] > arrayChar[j + 1])
            {
                int temp = arrayChar[j + 1];
                arrayChar[j + 1] = arrayChar[j];
                arrayChar[j] = temp;
            }
        }
    }
}

void printCharArray(char arrayChar[], int sizeCharArr)
{

    for (int i = 0; i < sizeCharArr; i++)
    {
        printf("%c\n", arrayChar[i]);
    }
}

// The end of Char sort funcs.

int main()
{
    int array[] = {6, 2, 6, 32};
    int size = sizeof(array) / sizeof(array[0]);

    char arrayChar[] = {'A', 'Z', 'E', 'F'};
    int sizeCharArr = sizeof(array) / sizeof(array[0]);

    bubbleAscendingSort(array, size);
    printArray(array, size);

    bubbleCharAscendingSort(arrayChar, sizeCharArr);
    printCharArray(arrayChar, sizeCharArr);

    return 0;
}
