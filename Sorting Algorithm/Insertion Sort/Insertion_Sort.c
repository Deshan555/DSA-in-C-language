#include <stdio.h>

void print_Array(int array[],int length); // Declare Function

void sort_function(int array[] ,int length); // Declare Function

int main()
{
	int Array[5] = {12, 11, 13, 5, 6};

	print_Array(Array,5);

	sort_function(Array,5);

	print_Array(Array,5);

}


void sort_function(int array[] ,int length)
{
	for(int i = 1;i < length;i++)
	{
		int key = array[i];

		int index = i - 1;

		while((index >= 0) && (array[index] > key))
		{
			array[index + 1] = array[index];

			index = index - 1;
		}

		array[index + 1] = key;
	}
}


void print_Array(int array[],int length)
{
	printf("\nArray : [ ");

	for(int i =0;i < length;i++)
	{
		printf("%d ",array[i]);
	}

	printf(" ]");
}



