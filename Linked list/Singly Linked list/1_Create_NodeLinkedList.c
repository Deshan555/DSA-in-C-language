#include <stdio.h>

#include <stdlib.h>

struct node
{
    int index;

    int marks;

    struct node *next;
};


int main()
{
    struct node *head = NULL;

    head = (struct node*)malloc(sizeof(struct node));

    head -> index = 1689;

    head -> marks = 88;

    head -> next = NULL;

    printf("Index : %d |Marks : %d",head->index,head->marks);
}


