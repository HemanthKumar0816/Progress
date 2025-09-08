#include<stdio.h>

int my_strlen(char *str){
    int len=0;
    while(str[len] != '\0'){
        len++;
    }
    return len-1;
}

int main(){
    char str[100];
    printf("enter string :");
    fgets(str,sizeof(str),stdin);
    printf("string length :%d",my_strlen(str));
    return 0;
}