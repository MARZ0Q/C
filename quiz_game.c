#include <stdio.h>

int main()
{
    char quizes[][30] = {
        "Who is Donald trump?",
        "Why human exists?",
        "Why do you like to play game?"};

    char quizeOption[][3][30] = {
        {"1.Donald trump", "2.President"},
        {"1.To make the world worse", "2.To make the world good"},
        {"1.Because I like it", "2.Because I want to stay naive"},
    };
    char answers[] = {'1', '1', '2'};
    char userInput;
    int score = 0;

    for (int i = 0; i < sizeof(quizes) / sizeof(quizes[0]); i++)
    {
        printf("********\n");
        printf("%s\n", quizes[i]);
        printf("********\n");
        for (int j = 0; j < sizeof(quizeOption) / sizeof(quizeOption[i]); j++)
        {
            printf("%s\n", quizeOption[i][j]);
        }
        scanf("\n%c", &userInput);

        if (answers[i] == userInput)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("Your score is : %d/%lu\n", score, sizeof(answers) / sizeof(answers[0]));

    return 0;
}
