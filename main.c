// Raghav Pillai CS1337 Review HW 6
#include <stdio.h>
#include <stdlib.h>

// Node declaration, value of node and pointer to next node
struct Node{
   int num;
   struct Node* next;
};

void printList(struct Node *start){ //Print function, takes header
    struct Node *temp;
    temp = start;

    while(temp != NULL){ // While the current node exists
        if(temp->next != NULL){ // If next node exists
            printf("%d ",temp->num);
            temp = temp->next;
        }else{
            printf("%d",temp->num); // No space
            temp = temp->next;
        }
    }
    
    printf("\n");
}

void insertList(struct Node**start,int pos){ // Inserting into list, takes header and position of node
    struct Node *temp;
    struct Node *temp1;

    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->num = pos;
    temp->next = NULL;

    if(*start == NULL){ // If header node is null
        *start = temp;
    }else{
        temp1=*start;
        while(temp1->next!=NULL)
            temp1 = temp1->next;
            temp1->next = temp;
    }
}

void bubbleSort(struct Node **start){ // Bubble sorting
    struct Node *first = *start;
    struct Node *second = *start;
    int temp;

    printList(*start);

    while(first->next != NULL){
        second = *start;
        while(second->next != NULL){
            if (second->num >second->next->num){
                temp = second->num;
                second->num = second->next->num;
                second->next->num = temp;
            }
            second = second->next;
       }
       
       printList(*start);
       first = first->next;
   }
}

void selectionSort(struct Node **start){ // Selection sorting
   struct Node *first = *start;
   struct Node *second = *start;
   struct Node *bot;
   int temp;

   while(first->next != NULL){
       bot = first;
       second = first;
       while(second != NULL){
           if (bot->num>second->num)
               bot = second;
           second = second->next;
       }
       if(first != bot){
           temp = first->num;
           first->num = bot->num;
           bot->num = temp;
       }
       printList(*start);
       first = first->next;
   }
}

int main(){
    int input;
    struct Node *start1 = NULL;
    struct Node *start2 = NULL;

    // Input numbers
    printf("Enter 8 numbers\n");
    for(size_t i=0; i<8; i++){
        scanf("%d", &input);
        insertList(&start1, input);
        insertList(&start2, input);
    }

    // Print and sort bubble sort
    printf("Bubble Sort\n");
    printList(start1);
    bubbleSort(&start1);
    printList(start1);

    printf("\n"); // Split the lists

    // Print and sort selection sort
    printf("Selection Sort\n");
    printList(start2);
    selectionSort(&start2);

    return 1;
}