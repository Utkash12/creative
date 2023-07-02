#include <stdio.h>
int main()
{
    int x;
    printf("enter the number to be checked: ");
    scanf("%d", &x);
    int flag = 0;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("the number is not prime.");
    }
    else
    {
        printf("the number is prime.");
    }
}