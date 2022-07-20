#include <stdio.h>

int main(){
    char str[100];
    printf("Enter string :");
    scanf("%s",str);
    printf("\n");
    int l=0;
    for(;str[l]='\0';l++);
    int flag=1;
    for(int i=0;i<l;i++)str[i]!=str[l-i-1]?flag=0:0;
    if(flag)printf("is palindrom");
    else printf("not palindrom");
}