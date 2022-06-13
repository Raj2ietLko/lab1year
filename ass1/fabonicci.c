#include <stdio.h>

#define cin(b) scanf("%d",&b)
#define cout(b) printf("%d ",b)
#define coutn(b) printf("%d\n",b)
#define nln printf("\n");
int main() {
    int N;
    cin(N);
    int n=1;   //current term
    int n_1=0; //last term
    cout(n_1);
    for ( int i=0; i<N-1; i++ ){
        //making n as sum of last two terms 
        cout(n);
        n=n+n_1;
        n_1=n-n_1; //n_1=(n+n_1)-n_1
    }nln;
}