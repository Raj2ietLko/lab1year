#include <stdio.h>

int sum_of_odd_digits(int a){
    int sUm=0;
    for(;a!=0;a=a/10)sUm+=(a&1)*(a%10);
    return sUm;
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",sum_of_odd_digits(a));
}