
#include <stdio.h>

int Array[10] = {1,2,3,4,5,6,7,8,9,10}; // Declare array

int main()
{
    print_array();

    get_Size();

    length();
}

// That method help to print array

void print_array()
{
    int size = length();

    for(int i = 0;i < size;i++)
    {
        printf("%d ",Array[i]);
    }
}

// That Method Get Length Of Array
int length()
{
    //printf("\n\nArray Length : %d",sizeof(Array)/sizeof(Array[0]));

    return sizeof(Array)/sizeof(Array[0]);
}

void get_Size()
{
    printf("\n\nArray Size In Bytes : %d",sizeof(Array));
}
