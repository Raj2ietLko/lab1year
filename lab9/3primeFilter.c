// Write a program to print all the prime number, between 1 to 100 in file prime.txt.

#include <stdio.h>
#include <math.h>

int main(){
    FILE* prime;
    prime=fopen("prime.txt","w");
    int pr[100],n=0;
    pr[0]=2;
    for(int i=3;i<=100;i++){
        int flag=1;
        for(int j=0;j<min(n,sqrt(i));j++)i%pr[j]==0?(flag=0):(1);
        if(flag)fprintf("%d\n",i);
    }
}