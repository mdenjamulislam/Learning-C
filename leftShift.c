#include <stdio.h>

int main()
{
    int array[] = {12, 20, 30, 40, 50, 60, 70};
    int size = sizeof(array) / sizeof(array[0]);
    int newArr[size];

    // Left shift one byte
    // for (int i = 0; i < size-1; i++)
    // {
    //     newArr[i] = array[i + 1];
    // }
    // newArr[size - 1] = 0;

    // N byte left shift
    int k = 3;
    for (int i = 0; i < size; i++)
    {
        if (i < size - k)
        {
            newArr[i] = array[i + k];
        } else {
            newArr[i] = 0;
        }
    };

    // Print the new array
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", newArr[i]);
    };

    return 0;
}