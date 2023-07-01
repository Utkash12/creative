#include <stdio.h>
int main()
{
    int num;
    int x;
    int z = 0;
    printf("enter the number to be reversed: ");
    scanf("%d", &num);
    while (num > 0)
    {
        x = num % 10;
        z = z * 10 + x;
        num = num / 10;
    }
    printf("the reversed number will be: %d", z);
    return 0;
}