
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

    node_count(head);

    find(head,10);

    last_Node(head);
}


int node_count(struct node *head)
{
    int count = 1;

    struct node *pointer = head;

    if(pointer -> data == NULL)
    {
        printf("Current Linked list Empty");

        return 0;
    }
    else
    {
        while(pointer ->link != NULL)
        {
            pointer = pointer ->link;

            count = count + 1;
        }

        printf("Node Count : %d",count);
    }
}

// Finding pointers to a node with a particular info

void find(struct node *head,int data)
{
    int position = 0;

    struct node *point = head;

    if(head -> data == NULL)
    {
         printf("\n\nEmpty List");
    }
    else
    {
        while(point != NULL)
        {
            if(point -> data == data)
            {
                printf("\n\nSearch Result Found In Position : %d Memory Address : %p",position,&point->link);

                return 0;
            }

            point = point -> link;
        }

        printf("\n\nSearch Result Not Found");
    }
}

// Last Node Of The Link list

int last_Node(struct node *head)
{
    struct node *ptr = head;

    if(head -> data == NULL)
    {
        printf("\nEmpty Linked List");

        return 0;
    }
    else
    {
        while(ptr != NULL)
        {
            if(ptr -> link == NULL)
            {
                printf("\nLast Node : %d",ptr -> data);

                 return ptr->data;
            }
            ptr = ptr -> link;
        }
    }
}
