#include <stdio.h>

#include <stdlib.h>

int main()
{
	int elements;

	int* pointer;

	printf("Add Number Of Elements : ");

	scanf("%d",&elements);

	pointer = (int*)malloc(elements*sizeof(int));

	if(pointer == NULL)
	{
		printf("Memory Can't Be Allocate");

		exit(0);
	}
	else
	{
		printf("Memory Allocation Finished\n");

		print_Memaddress(pointer,elements);
	}
}

void print_Memaddress(int* pointer,int elements)
{
    for(int i = 0;i < elements;i++)
    {
        printf("\nMemory Location %d : %p \n\n",i,&pointer[i]);
    }
}

