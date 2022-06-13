#include <stdio.h>

#define cin(b) scanf("%d",&b)
#define cout(b) printf("%d ",b)
#define coutn(b) printf("%d\n",b)
#define nln printf("\n");
int main() {
    int N;
    cin(N);
    N++;
    int sum=0;
    for(int i=1;i<N;sum+=i,i++);
    cout(sum);
    nln;
}