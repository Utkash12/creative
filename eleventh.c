#include <stdio.h>
int main()
{
    int j;
    for (int i = 0; i < 7; i++)
    {
        for (j = 7; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < j; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}