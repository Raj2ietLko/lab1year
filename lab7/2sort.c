#include <stdio.h>

void swaP(char *a,char *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int len(char* str){
    int l=0;
    for(;str[l]!='\0';l++);
    return l;
}

void bubble(char *str){
    int l=len(str);
    for(int i=0;i<l-1;i++){
        for(int j=0;j<l-i-1;j++){
            if(str[j]>str[j+1])swaP(&str[j],&str[j+1]);
        }
    }
}



int main(){
    char a[20];
    printf("enter a string (length<20 ) :\n");
    scanf("%s",a);
    bubble(a);
    //swaP(a[0],a[1]);
    printf("%s",a);
}