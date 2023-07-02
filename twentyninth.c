#include <stdio.h>
int main()
{
    int last;
    printf("enter the last limit: ");
    scanf("%d", &last);
    int flag = 0;
    int num;
    while (num < last)
    {
        for (int check = 2; check < num; check++)
        {
            if (num % check == 0)
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
            printf("%d \n", num);
        }
    }
    return 0;
}