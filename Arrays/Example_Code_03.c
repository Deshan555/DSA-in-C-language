// Add Element To Array

#include <stdio.h>

int number[8] = {4,6,8,10,37,2,40};

int main()
{
    int position,data;

    print_array();

    printf("Enter Position Are You Want To Add New Value : ");

    scanf("%d",&position);

    printf("Enter Value Of Element Are You Want Add : ");

    scanf("%d",&data);

    addTo_Position(position,data);

    print_array();
}

int addTo_Position(int position,int data)
{
    int size = length();

    if(position > size)
    {
        printf("That Action Can't Be Performed");

        return 0;
    }
    else
    {
        for(int i = size;i > position;i--)
        {
            number[i] = number[i-1];
        }

        number[position] = data;
    }
}


void print_array()
{
    int size = length();

    printf("\nArray = [ ");

    for(int i = 0;i < size;i++)
    {
        printf("%d ",number[i]);
    }

    printf(" ]\n\n");
}

int length()
{
    return sizeof(number)/sizeof(number[0]);
}
