//Write a program to find whether the number is Armstrong number
#include <stdio.h>
#include <math.h>

#define cin(n) scanf("%d",&n)
#define cout(n) printf("%d ",n)
#define couts(n) printf(n)
#define nln printf("\n");
int main(){
    int n;
    cin(n);
    int len=0;
    for(int t=n;t!=0;t=t/10)len++;
    int sum=0;
    for(int N=n;N!=0;N=N/10)sum+=pow(N%10,len);
    if( sum==n )couts("yes it's");
    else couts("it's not");
}
