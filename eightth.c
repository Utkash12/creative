#include<stdio.h>
int main(){
    int a[5];
    printf("enter the 5 numbers");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]); 
    }
    for(int i=0;i<5;i++){
        printf("the element at %d will be %d \n", i, a[i]);
    }
    return 0;
}