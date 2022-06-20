#include <stdio.h>
#include <math.h>
int main(){
    int l=4;
    int n;
    scanf("%d",&n);
    while(l>-1){
        int a= ((int)(n/pow(10,l)))%10;
        printf("%d\n",a);
        l--;
    }
}