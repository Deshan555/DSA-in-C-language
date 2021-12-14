
#include <stdio.h>

#include <stdlib.h>


struct node
{
    int data;

    struct node *link;
};

struct node *front = NULL;

struct node *rear = NULL;

int main()
{
    struct node *head = malloc(sizeof(struct node));

    head -> data = 10;

    head -> link = NULL;

    front = rear = head;

    enQueue(20);

    enQueue(30);

    printf("%d ",front->data);

    printf("%d ",rear->data);
}


void enQueue(int data)
{
    struct node *temp = malloc(sizeof(struct node));

    //struct node *ptr = head;

    temp -> data = data;

    temp -> link = NULL;

    while(rear -> link != NULL)
    {
        rear = rear -> link;
    }

    rear -> link = temp;

    return 0;
}
