#include <stdio.h>
#include <stdlib.h>

int fact(int n){
   if(!n)return 1;
   return n*fact(n-1);
}
int main(int argc, char* argv[]) {
   printf("%d",fact(atoi(argv[1])));
   return 0;
}