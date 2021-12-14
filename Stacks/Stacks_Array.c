
#include <stdio.h>

#define SIZE 10

int top = -1;

int stack_array[SIZE];

int peek()
{
    return stack_array[top];
}

int push(int data)
{
    if(top == SIZE-1)
    {
        return  0;
    }
    else
    {
        top++;

        stack_array[top] = data;

        return 1;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Is Underflow");
    }
    else
    {
        printf("\n%d Element Remove From Stack",stack_array[top]);

        top--;
    }
}


void display()
{
    if(top == -1)
    {
        printf("Empty Stack  Array");
    }
    else
    {
        printf("\nStack : [ ");

        for(int i = top;i >= 0;i--)
        {
            printf("%d ",stack_array[i]);
        }

        printf(" ]");
    }
}


int main()
{
    push(10);

    push(20);

    push(30);

    push(40);

    push(50);

    push(60);

    display();

    printf("\nTop Most Element : %d",peek());

    pop();

    display();
}
