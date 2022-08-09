// Write a program to print all the prime number, between 1 to 100 in file prime.txt.

#include <stdio.h>

int main(){
    FILE* prime;
    prime=fopen("prime.txt","w");
    fprintf(prime,"2\n");
    for(int i=3;i<=100;i++){
        int flag=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){flag=0;break;}
        }
        if(flag)fprintf(prime,"%d\n",i);
    }
    fclose(prime);
    printf("succ");
}
