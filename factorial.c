#include<stdio.h>

int main(){
    int num,fact=1,i;
    printf("enter number :");
    scanf("%d",&num);
    for(i=num;i>0;i--){
        fact*=i;
    }
    printf("%d",fact);
}