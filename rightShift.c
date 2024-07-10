#include <stdio.h>

int main() 
{
    int array[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(array) / sizeof(array[0]);
    
    // new array for store value after shifting
    int newArr[size];

    // Single right shift
    for (int i = 0; i < size; i++)
    {
        newArr[i] = array[i + 1];
    }
    ne
}