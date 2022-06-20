//Write a program to generate sum of series 
//    1!+2!+3!+--------------n!

#include <stdio.h>
#include <math.h>

#define cin(n) scanf("%d",&n)
#define cout(n) printf("%d ",n)
#define couts(n) printf(n)
#define nln printf("\n");
int main()
{
    
        int n;
        cin(n);
        int sum=0;
        int fact =1;
        //int sign=-1;
        for(int i=1;i<n+1;i++){
            fact*=i,sum+=fact;
            //sign*=-1;
        }
        cout(sum);
}
