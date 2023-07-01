#include <stdio.h>
int main()
{
    int arr[6];
    printf("enter 6 numbers: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("the reverse order array will be: \n");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}