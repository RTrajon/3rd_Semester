#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node* head = NULL;
    struct Node* secend = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    secend = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head ->data = 1;
    head ->next = secend;

    secend ->data = 2;
    secend ->next = third;

    third ->data = 3;
    third ->next = NULL;

    return 0;

}
