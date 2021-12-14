
#include <stdio.h>

#define SIZE 10

int queue[SIZE];

int front = -1;

int rear = -1;

int main()
{
    Isempty();

    enqueue(10);

    enqueue(20);

    enqueue(30);

    enqueue(40);

    display();

    deQueue();

    display();

    printf("Front Value : %d",peek());

}

int enqueue(int data)
{
    if(Isempty() == 1)
    {
        rear = rear + 1;

        front = front + 1;

        queue[front] = data;
    }
    else if(Isfull() == 0)
    {
        printf("Queue Full");

        return 0;
    }
    else
    {
        rear++;

        queue[rear] = data;
    }
}

void deQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        front = front + 1;
    }
}



void display()
{
   printf("\nQueue : [ ");

   for(int i = front;i <= rear ;i++)
   {
       printf("%d ",queue[i]);
   }

   printf(" ]\n");
}

int Isfull()
{
    if(rear == 9)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

int peek()
{
    if(Isempty() == 1)
    {
        printf("\n\nEmpty Queue");
    }
    else
    {
        return queue[front];
    }
}

int Isempty()
{
    if((front == -1)&&(rear == -1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

