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
        for (int k = 0; k < j; k++)
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
        for (int k = 5; k > j; k--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}