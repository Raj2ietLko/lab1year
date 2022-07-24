//4 Write a program to store the following string 
//“zero”, “one” -------“five”.
// Print the no in words, given in figure as 3205.
#include <string.h>
#include <stdio.h>
char a[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void printInWord(int n){
    if(n/10==0){
      printf("%s ",a[n]);
      return ;
    }
    printInWord(n/10);
    printf("%s ",a[n%10]);
}

int main(){
    int a;
    scanf("%d",&a);
    printInWord(a);
}
