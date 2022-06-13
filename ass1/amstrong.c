#include <stdio.h>

#define cin(b) scanf("%d",&b)
#define cout(b) printf("%d ",b)
#define coutn(b) printf("%d\n",b)
#define nln printf("\n");

int power(int a,int b){
    int p=1;
    for ( int i=0;i<b;i++){
        p*=a;
    }return p;
}

int main(){
    int N;
    cin(N);
    N++;
    int le=1;
    for ( int i=1;i<N;i++ ){
        if ( i>=power(10,le) )le++;
        int n=i;
        int sum=0;
        for(;n!=0;sum+=power((n%10),le),n=n/10);
        if (sum==i)cout(i);
    }
    nln;
}