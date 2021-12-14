#include <stdio.h>

int number[7] = {4,6,8,10,37,2,40};

int main()
{
    get_Total();

    search_Array(10);
}

void get_Total()
{
    int count;

    int array_length = length();

    for(int i = 0;i < array_length;i++)
    {
        count = count + number[i];
    }

    printf("Total Count : %d",count);
}

int length()
{
    return sizeof(number)/sizeof(number[0]);
}

//Question: Search for an element and tell whether it is present in the array or not.

int search_Array(int element)
{
    int array_size = length();

    for(int i = 0;i < array_size;i++)
    {
        if(number[i] == element)
        {
            printf("\nRequested Element Found In The Array [Position : %d ]",i);

            return 0;
        }
    }
    printf("Requested Element Not In That Array");
}
