#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    int c=a+b;
    printf("the sum of %d and %d is %d", a,b,c);
    return 0;
}