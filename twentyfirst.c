#include <stdio.h>
int main()
{
    int n, a;
    printf("enter the number to be reversed: ");
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        printf("%d", a);
        n = n / 10;
    }
}