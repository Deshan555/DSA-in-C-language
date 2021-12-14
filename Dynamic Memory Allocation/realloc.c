
#include <stdio.h>

#include <stdlib.h>

int main()
{
	int elements = 5;

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

		int n = 10;

		pointer = realloc(pointer, n * sizeof(int));

		print_Memaddress(pointer,10);
	}

	return 0;
}

void print_Memaddress(int* pointer,int length)
{
    for(int i = 0;i < length;i++)
    {
        printf("\nMemory Location %d : %p \n\n",i,&pointer[i]);
    }
}

