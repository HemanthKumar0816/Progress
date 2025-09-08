#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int i,j,count=0,len;
    printf("enter string :");
    scanf("%s",str);
    len=strlen(str);
    for(i=0,j=len-1;i<j;i++,j--){
        if(str[i] != str[j]){
            count++;
        }
    }
    if(count == 0){
        printf("PALINDROME");
    }
    else{
        printf("NOT PALINDROME");
    }
    return 0;
}