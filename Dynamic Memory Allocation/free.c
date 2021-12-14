
#include <stdio.h>

#include <stdlib.h>

int main()
{
	int elements;

	printf("Add Number Of Elements : ");

	scanf("%d",&elements);

	int* pointer_01 = (int*)calloc(elements,sizeof(int));

	int* pointer_02 = (int*)malloc(elements*sizeof(int));

	if((pointer_01 == NULL)&&(pointer_02 == NULL))
    {
        printf("Memory Allocation Failed");

        exit(0);
    }
    else
    {
        printf("Memory Allocation Finished\n");

		print_Memaddress(pointer_01,elements);

		print_Memaddress(pointer_02,elements);

		free(pointer_01); // Deallocate Memory Dynimacally

		free(pointer_02); // Deallocate Memory Dynimacally
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
