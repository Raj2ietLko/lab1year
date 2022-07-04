#include <stdio.h>

int areaOfRectangle(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",areaOfRectangle(a,b));
}