#include <stdio.h>
int main()
{
    for (int i = 0; i < 6; i++)
    {
        int j;
        for (j = 5; j > i; j--)
        {
            printf("   ");
        }
        for (int k = 0; k < i; k++)
        {
            printf(" * ");
        }
        for (int z = 1; z < i; z++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    for (int i = 1; i < 6; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("   ");
        }
        for (int k = 5; k > i; k--)
        {
            printf(" * ");
        }
        for (int b = 4; b > i; b--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}