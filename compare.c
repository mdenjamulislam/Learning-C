#include <cs50.h>
#include <stdio.h>

int main(void) {

    int a = get_int("Enter first value: ");
    int b = get_int("Enter second value: ");

    if (a > b)
    {
        printf(" a geter than b.");
    }
    else
    {
        printf("b gater than a");
    }

    return 0;
}