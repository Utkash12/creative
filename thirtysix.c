#include <stdio.h>
#include <stdbool.h>


int main()
{
    int i;
    printf("Armstrong numbers between 1 and 100 are:\n");
    for (i = 1; i <= 1000; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d\n", i);
        }
    }
    return ;
}

int isArmstrong(int num)
{
    int temp, digit, sum = 0;
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return num == sum;
}
