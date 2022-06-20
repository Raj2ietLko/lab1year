//Write a program to print the entire prime no between 1 and 300.
#include <stdio.h>
#include <math.h>

int main()
{
    int n=300;
    //scanf("%d",&n);
    printf("2 ");
    for(int i=3;i<=n;i++){
        int flag=1;
        for(int j=2;j<=sqrt(i);j++){
            if(!(i%j)){flag=0;break;}
        }
        if(flag)printf("%d ",i);
    }
}