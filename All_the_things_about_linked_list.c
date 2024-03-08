
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* previous;
    struct Node* next;
};

void makeANode(struct Node **head,int value){
    int count = 0;
    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL){
        printf("FUCK you\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;
    newNode->previous = NULL;

 if(*head == NULL){
        (*head) = newNode;
    }
    else{
        struct Node *currentAddress = *head;
        struct Node *tempAddress = NULL;

        while(currentAddress->next != NULL){
            count++;
            currentAddress = currentAddress->next;
        }
        currentAddress->next = newNode;

        currentAddress = *head;

        currentAddress->previous = tempAddress;

        while(count > -1){
            tempAddress = currentAddress;
            currentAddress = currentAddress->next;
            count--;
        }
        currentAddress->previous = tempAddress;
    }
}

void traverse(struct Node *head){
    struct Node *currentAddress = head;

    while(currentAddress != NULL){
        printf("%d\n",currentAddress->data);
        currentAddress = currentAddress->next;
    }
}

void removeFromFirst(struct Node **head){
    struct Node *currentAddress =  (*head);
    *head = currentAddress->next;
}

void removeFromLast(struct Node **head){
    struct Node *currentAddress =  (*head);
    struct Node *tempAddress = NULL;

    while(currentAddress->next != NULL){
        tempAddress = currentAddress;
        currentAddress = currentAddress->next;
    }
    if(tempAddress!=NULL){
        tempAddress->next = NULL;
    }
    else{
        (*head) = NULL;
    }
}

void makeANodeFromBegining(struct Node **head,int value){
    struct Node *newNode = malloc(sizeof(struct Node));
    struct Node *thePreviousHead = *head;

    newNode->next = thePreviousHead;
    newNode->previous = NULL;
    newNode->data = value;

    *head = newNode; 
}

void removeFromTheMiddle(struct Node **head){
    if((*head)->next==NULL){
        (*head) = NULL;
        return;
    }

    int count = 0;
    int midValue;

    struct Node *currentAddress = *head;
    struct Node *tempAddress = NULL;

    while(currentAddress != NULL){
        currentAddress = currentAddress->next;
        count++;
    }
    currentAddress =  *head;

    // For Detecting mid value
    switch(count%2){
        case 0:
            int theMid = count/2;
            midValue = theMid;
            break;

        default:
            double theDecimalMid = count/2;
            midValue = ((int)theDecimalMid)+1;
            break;
    }

    // For actually removing
    switch(count%2){
        case 0:
            if(count==2){
                (*head) =NULL;
            }
            else{
                count = 1;
                while(midValue!=count){
                    tempAddress = currentAddress;
                    currentAddress = currentAddress->next;
                    count++;
                }
                tempAddress->next = currentAddress->next->next;

            }

            break;
        default:
             while(count!=midValue){
                tempAddress = currentAddress;
                currentAddress = currentAddress->next;
                count--;
            }
            tempAddress->next = currentAddress->next;
            break;
    }
}

int main(){
    struct Node *h = NULL;

    makeANode(&h,4);
    makeANode(&h,6);

    // makeANode(&h,316);

    // removeFromFirst(&h);

    removeFromTheMiddle(&h);
    traverse(h);

    // makeANodeFromBegining(&h,2);
    // makeANodeFromBegining(&h,22);
    // removeFromLast(&h);

    return 0;
}