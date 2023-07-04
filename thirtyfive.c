#include <stdio.h>
int isArmstrong(int num)
{
    int original = num;
    int arm = 0;
    int rem = 0;
    while (num > 0)
    {
        rem = num % 10;
        arm = (rem * rem * rem) + arm;
        num = num / 10;
    }
    return arm == original;
}
int main()

{
    int i;
    for (i = 0; i < 900; i++)
    {
        if (isArmstrong(i))
        {
            printf("%d ", i);
        }
    }
}