#include<stdio.h>
int main(){
    int n, arm=0,r,c;
    printf("enter any number:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}