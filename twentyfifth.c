#include <stdio.h>
int main()
{
    int num;
    printf("enter the number to be checked: ");
    scanf("%d", &num);
    int i;
    int flag = 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
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
        printf("the number is not prime");
    }
    else
    {
        printf("the number is prime");
    }
    return 0;
}