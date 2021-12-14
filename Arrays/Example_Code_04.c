
// Delete element from an array

#include <stdio.h>

int number[8] = {4,6,8,10,37,2,40};

int main()
{
    print_array();

    delete_data(3);

    print_array();
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


int delete_data(int position)
{
    if(position > length())
    {
        printf("That Action Can't Be Performed");
    }
    else
    {
        while(position < length())
        {
            number[position] = number[position + 1];

            position++;
        }

        number[length()-1] = 0;
    }
}
