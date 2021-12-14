
#include <stdio.h>

#include <stdlib.h>

struct node
{
    int data;

    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));

    head -> data = 10;

    head -> link = NULL;

    data_Input(head,87); // Insert Data

    data_Input(head,97); // Insert Data

    print_List(head); // Print Data
}

void print_List(struct node *head)
{
    struct node *pointer = head;

    if(head ->data == NULL)
    {
        printf("Linked List Is Currently Empty");
    }
    else
    {
        while(pointer != NULL)
        {
            printf("%d ",pointer->data);

            pointer = pointer -> link;
        }
    }
}


int data_Input(struct node *head,int value)
{
    struct node *pointer = head;

    struct node *temp = malloc(sizeof(struct node));

    if(pointer == NULL)
    {
        printf("Memory Allocation Fails");

        exit(0);
    }
    else
    {
        temp -> data = value;

        temp -> link = NULL;

        while(pointer -> link != NULL)
        {
            pointer = pointer -> link;
        }

        pointer -> link = temp;

        return 0;
    }
}



