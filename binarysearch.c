#include <stdio.h>

void main(int argc, char *argv[])
{
    printf("Binary Search \n");

    // the array to be searched
    int data[] = {1, 2, 3, 6, 9, 10, 25, 34, 78, 112};

    // the value to search
    int search_value = 25;

    // number of elements in the array
    int count = sizeof(data) / sizeof(int);
    //printf("Number of elements: %d \n", count);

    // two index references
    int front = 0;
    int end = count - 1;
    int center = 0;

    // binary search
    while(front <= end)
    {
        center = (front + end) / 2;
        if (data[center] == search_value)
        {
            printf("Value %d was found! \n", search_value);
            return;
        } else if (data[center] < search_value)
        {
            front = center + 1;
        } else if (data[center] > search_value)
        {
             end = center - 1;
        } else
        {
            printf("Unexpected situation! \n");
            return;
        }

        //printf("front: %d, center: %d, end: %d \n", front, center, end);
    }

    // we only come here if the value was not found.
    printf("Value %d was not found! \n", search_value);
    
}
