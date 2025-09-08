#include<stdio.h>

int main(){
    int a,b;
    char op;
    printf("Calculator\n");
    scanf("%d",&a);
    scanf("%c",&op);
    switch (op){
    case '+':
        scanf("%d",&b);
        printf("%d + %d :%d",a,b,a+b);
        break;
    case '-':
        scanf("%d",&b);
        printf("%d - %d :%d",a,b,a-b);
        break;
    case '*':
        scanf("%d",&b);
        printf("%d * %d :%d",a,b,a*b);
        break;
    case '/':
        scanf("%d",&b);
        printf("%d / %d :%d",a,b,a/b);
        break;
    default:
    printf("INVALID");
        break;
    }
    return 0;
}