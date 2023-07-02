#include <stdio.h>
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int start;
    int end;
    printf("enter the starting limit: ");
    scanf("%d", &start);
    printf("enter the ending limit: ");
    scanf("%d", &end);
    printf("The prime numbers between %d and %d are as follows: ", start, end);
    for (int i = start; i <=end; i++)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
        }
    }
}