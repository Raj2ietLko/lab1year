//4 Write a program to find 
//the sum of digits of a 5 digit
// number using command line argument.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char * argv[]){
    int s=0;
    for(int i=0;argv[1][i]!='\0';i++)s+=(int)(argv[1][i]-'0');
    printf("%d",s);
}