#include <stdio.h>
int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the %d digit", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d \n", arr[i]);
    }
    return 0;
}