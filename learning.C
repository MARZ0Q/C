#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     unsigned long input, *p;
//     printf("How many numbers do you want to allocate?\n");
//     scanf(" %lu", &input);

//     p = (unsigned long *)malloc(input * sizeof(int));
//     if (p == NULL)
//     {
//         printf("Memory allocation is failed! Exiting :( \n");
//         return 1;
//     }
//     else
//     {
//         printf("Memory allocation is Successfull! processing.... \n");
//         for (int i = 0; i < input; i++)
//         {
//             p[i] = i + 1;
//         }

//         printf("Your output is : \n");
//         for (int i = 0; i < input; i++)
//         {
//             printf("%ld\n", p[i]);
//         }
//     }

//     return 0;
// }

int main()
{
    // int *p, input;
    // printf("Enter your element size:\n");
    // scanf("\n%d", &input);
    // p = (int *)calloc(input, sizeof(int));
    // if (p == NULL)
    // {
    //     printf("Failed to allocate memory\n");
    //     return 1;
    // }
    // else
    // {
    //     printf("Successfull to allocate memory processing\n");
    //     for (int i = 0; i < input; i++)
    //     {
    //         p[i] = i + 1;
    //     }
    //     printf("Your output is \n");
    //     for (int i = 0; i < input; i++)
    //     {
    //         if (i == input - 1)
    //         {
    //             printf("%d\n", p[i]);
    //         }
    //         else
    //         {
    //             printf("%d", p[i]);
    //         }
    //     }
    //     printf("Befor address of your value : %p\n", p);
    //     free(p);
    //     printf("After address of your value : %p\n", p);
    //     printf("Your memory has been deallocated \n");
    //     printf("Now the value for your first input is : %d\n", p[0]);
    // }
    char *p2;
    p2 = (char *)calloc(3, sizeof(char));
    p2[0] = 'A';
    p2[1] = 'B';
    p2[2] = 'C';
    printf("%s\n", p2);
    return 0;
}