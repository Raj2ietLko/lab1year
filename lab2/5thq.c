//Write a program to find the sum of following series 
//    1-X1/1!+X2/2!- ............Xn/n!
#include <stdio.h>
#include <math.h>

#define cin(n) scanf("%d",&n)
#define cout(n) printf("%d ",n)
#define couts(n) printf(n)
#define nln printf("\n");
int main()
{
    
        int n,x;
        cin(n),cin(x);
        //if(!n)return 0; 
        int sum=1;
        int fact =1;
        int sign=-1;
        for(int i=1;i<n+1;i++){
            fact*=i;
            sum+=sign*pow(x,i)/fact;
            sign*=-1;
        }
        cout(sum);
}