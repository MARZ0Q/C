
#include <stdio.h>


void printHello(){
    printf("HEllo\n");
}

void printFuckYou(){
    printf("Fuck you\n");
}

int main()
{
    // void (*PprintHello)() = printHello;
    // void (*PprintFuckYou)() = printFuckYou;
    void (*pointerFunc[])() = {printFuckYou,printHello};

    printf("Input 0 for printing Fu*k you and 1 for Hello!\n");
    long unsigned decision = 100;
    scanf("\n%lu",&decision);

    if(decision>=2) return 0;
    
    pointerFunc[decision]();

    return 0;
}