

#include <stdio.h>

#include <stdlib.h>

struct node
{
    int data;

    struct node *link;
};

// Delete first node

struct node* delete_first(struct node *head)
{
    if(head == NULL)
    {
        printf("List already empty");
    }
    else
    {
        struct node *temp = head;

        head = head -> link;

        free(temp);

        temp = NULL;
    }

    return head;
}

struct node* delete_Last(struct node *head)
{
    if(head == NULL)
    {

    }
    else if(head  -> link = NULL) // If Link list have one node
    {
        free(head);

        head = NULL;
    }
    else
    {
        struct node *temp_1 = head;

        struct node *temp_2 = head;

        while(temp_1 -> link != NULL)
        {
            temp_2 = temp_1;

            temp_1 = temp_1 -> link;
        }

        temp_2 -> link = NULL;

        free(temp_1);

        temp_1 = NULL;
    }

    return head;

}

int main()
{
    struct node *head = malloc(sizeof(struct node));

    head -> data = 10;

    head -> link = NULL;

    data_Input(head,87); // Insert Data

    data_Input(head,97); // Insert Data

    head = delete_first(head);

    delete_Last(head);

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


