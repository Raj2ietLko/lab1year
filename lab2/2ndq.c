//Write a program to construct a Fibonacci series upto n terms.
#include <stdio.h>

#define cin(n) scanf("%d",&n)
#define cout(n) printf("%d ",n)
#define nln printf("\n")
int main()
{
    int N;
    cin(N);
    if(!N)return 0;
    int n=1,n_1=0;
    if(N==1){
        cout(n_1);
        return 0;
        }
    else cout(n_1),cout(n);
    for( int i=1;i<=N-2;i++){
        n=n+n_1;
        n_1=n-n_1;
        cout(n);
    }
    nln;
}
