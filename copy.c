#include <stdio.h>

int main(void) 
{
    int array[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(array) / sizeof(array[0]);

    int newArray[size];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }

    // print newArray element
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", newArray[i]);
    }

    return 0;
}