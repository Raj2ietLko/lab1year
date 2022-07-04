#include <stdio.h>

int fact(int a){
    int fact=1;
    for(int i=1;i<a+1;i++)fact*=i;
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));
}