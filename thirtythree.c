#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to be checked: ");
    scanf("%d",&num);
    int original=0;
    original=num;
    int arm=0;
    while(num>0){
        int rem=num%10;
        arm=(rem*rem*rem)+arm;
        num=num/10;
    }
    if(original==arm){
        printf("The number is armstrong");
    }
    else{
        printf("The number is not armstrong");
    }
    return 0;
}