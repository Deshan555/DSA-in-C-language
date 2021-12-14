
#include <stdio.h>

#include <stdlib.h>

int main()
{
	int elements;

	printf("Add Number Of Elements : ");

	scanf("%d",&elements);

	int* pointer = (int*)calloc(elements,sizeof(int));

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

	return 0;
}

void print_Memaddress(int* pointer,int elements)
{
    for(int i = 0;i < elements;i++)
    {
        printf("\nMemory Location %d : %p \n\n",i,&pointer[i]);
    }
}
