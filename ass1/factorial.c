#include <stdio.h>

#define cin(b) scanf("%d",&b)
#define cout(b) printf("%d ",b)
#define coutn(b) printf("%d\n",b)
#define nln printf("\n");
int main() {
    int N;
    cin(N);
    N++;
    int fact=1;
    for(int i=2;i<N;fact*=i,i++);
    cout(fact);
    nln;
}