#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("enter the number to be reversed: ");
    scanf("%d", &x);
    while (x > 0)
    {
        y = x % 10;
        printf("%d", y);
        x = x / 10;
    }

    return 0;
}