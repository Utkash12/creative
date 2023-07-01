#include <stdio.h>
int main()
{
    int x;
    int y;
    int z = 0;
    printf("enter the number tp be reversed: ");
    scanf("%d", &x);
    while (x > 0)
    {
        y = x % 10;
        z = z * 10 + y;
        x = x / 10;
    }
    printf("the reversed number will be: %d", z);
    return 0;
}