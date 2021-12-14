
#include <stdio.h>

#include <stdlib.h>

struct node
{
    int data;

    struct node *link;
};

// Define a Node pointer ' and set it to NULL

struct node *pointer_top = NULL;

int Isempty()
{
    if(pointer_top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int peek()
{
    if(Isempty()==0)
    {
        return pointer_top -> data;
    }
    else
    {
        return 0;
    }
}

void print_List()
{
    struct node *pointer = pointer_top;

    if(pointer_top ->data == NULL)
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


void Display()
{
    struct node *pointer = pointer_top;

    if(pointer_top ->data == NULL)
    {
        printf("\nLinked List Is Currently Empty");
    }
    else
    {
        printf("\n\nStack : [ ");

        while(pointer != NULL)
        {
            printf("%d ",pointer->data);

            pointer = pointer -> link;
        }

        printf(" ]");
    }
}


void push (int data)
{

    struct node *ptr = malloc(sizeof(struct node));

    if(ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        ptr -> data = data;

        if(pointer_top == NULL)
        {
            ptr -> link = NULL;

            pointer_top = ptr;
        }
        else
        {
            ptr -> link = pointer_top;

            pointer_top = ptr;

        }
        printf("\n\nItem pushed : %d",data);

    }
}


void pop()
{
    struct node *ptr = pointer_top;

    int element;

    if(pointer_top == NULL)
    {
        printf("\n\nStack Underflow");
    }
    else
    {
        element = ptr -> data; // get top most element and assign that value to element veriable

        ptr = pointer_top; // assign pointer top link to ptr variable

        pointer_top = pointer_top -> link; // traversal pointer top to next link

        free(ptr); // free memory

        printf("\n\nItem Popped Finish");
    }
}


int main()
{
    push(67);

    push(167);

    push(617);

    push(647);

    push(637);

    Display();

    pop();

    Display();

}
