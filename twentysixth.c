#include <stdio.h>
int main()
{
    int num;
    int flag = 0;
    printf("enter the number to be checked: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }
    return 0;
}