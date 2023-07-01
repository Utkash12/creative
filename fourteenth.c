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
        for (int k = 1; k < i; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}