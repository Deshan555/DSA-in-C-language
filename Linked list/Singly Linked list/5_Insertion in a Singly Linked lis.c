
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

    int i = 20;

    head -> data = 10; //Insertion to an empty list

    head -> link = NULL;

    while(i < 100)
    {
        add_2End(head,i);

        i = i + 10;
    }

    add_Begining(&head,100);

    add_2Position(head,5,400);

    add_2Before_Node(head,40,300);

    print_List(head);
}


//Insertion to the end

int add_2End(struct node *head,int data)
{
    struct node *ptr = head;

    struct node *temp = malloc(sizeof(struct node));

    if(temp == NULL)
    {
        printf("Memory Allocation Fail");
    }
    else
    {
        temp -> data = data;

        temp -> link = NULL;

        while(ptr -> link != NULL)
        {
            ptr = ptr -> link;
        }

        ptr -> link = temp;

        return 0;
    }
}

//Insertion at the beginning

int add_Begining(struct node **head,int data)
{

    struct node *temp = malloc(sizeof(struct node));

    if(temp == NULL)
    {
        printf("Memory allocation fails");
    }
    else
    {
        temp -> data = data;

        temp -> link = NULL;

        temp -> link = *head;

        *head = temp;
    }
}

// Print all link list

void print_List(struct node *head)
{
    struct node *pointer = head;

    if(head ->data == NULL)
    {
        printf("\nLinked List Is Currently Empty");
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

// Insertion in between the nodes

void add_2Position(struct node *head,int position,int data)
{
    struct node *ptr = head;

    struct node *temp = malloc(sizeof(struct node));

    if(temp == NULL)
    {
        printf("Memory Allocation Fail");
    }
    else
    {
        temp -> data = data;

        temp -> link = NULL;

        position--;

        while(position != 1)
        {
            ptr = ptr -> link;

            position--;
        }

        temp -> link = ptr -> link;

        ptr -> link = temp;

        return 0;
    }
}


