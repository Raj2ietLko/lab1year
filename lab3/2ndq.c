//2. Write a program to print out all the Armstrong number between 100 and 500.
#include <stdio.h>
#include <math.h>

#define cin(n) scanf("%d",&n)
#define cout(n) printf("%d ",n)
#define couts(n) printf(n)
#define nln printf("\n");
int main()
{
    int N=500,n=100;

    for(;n<=N;n++)
    {
        //int n;
        //cin(n);
        int len=0;
        for(int t=n;t!=0;t=t/10)len++;
        int sum=0;
        for(int N=n;N!=0;N=N/10)sum+=pow(N%10,len);
        if( sum==n )cout(n);
        //else couts("it's not");
    }
}