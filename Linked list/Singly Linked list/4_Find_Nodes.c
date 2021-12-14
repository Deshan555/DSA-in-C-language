
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

    print_List(head);

    Second_Last(head);

    node_Inpos(2,head);
}

void data_Input(struct node *head,int input)
{
    struct node *point = head;

    struct node *temp = malloc(sizeof(struct node));

    if(point == NULL)
    {
        printf("\nMemory allocation fail");
    }
    else
    {
         temp -> data = input;

         temp -> link = NULL;

         while(point -> link != NULL)
         {
             point = point -> link;
         }

         point -> link = temp;
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

// Count number of nodes

int node_count(struct node *head)
{
    int count = 1;

    struct node *pointer = head;

    if(pointer -> data == NULL)
    {
        printf("\nCurrent Linked list Empty");

        return 0;
    }
    else
    {
        while(pointer ->link != NULL)
        {
            pointer = pointer ->link;

            count = count + 1;
        }

        printf("\nNode Count : %d",count);

        return count;
    }
}

// Find The second last node

void Second_Last(struct node *head)
{
    struct node *pointer = head;

    if(head ->data == NULL)
    {
        printf("\nLinked List Is Currently Empty");
    }
    else
    {
        while(pointer -> link -> link != NULL)
        {
            pointer = pointer -> link;
        }
         printf("\nSecond Last Node : %d ",pointer->data);
    }
}


//Finding pointers to a node at a particular position

void node_Inpos(int position,struct node *head)
{
    struct node *ptr = head;

    int count = 1;

    if(node_count(head) < position)
    {
        printf("\nInvalid Index");
    }
    else
    {
        while(ptr != NULL)
        {
            ptr = ptr -> link;

            if(count == position)
            {
                printf("\nValue In Selected Index : %d Data : %d",position,ptr -> data);
            }

            count ++;
        }
    }
}

