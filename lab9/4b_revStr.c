//Write the following C program using pointer:
//    a) To sort the list of numbers through pointer
//    b) To reverse the string through pointer.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    char* string,t;
    printf("enter length of string:");
    scanf("%d",&n);
    string=(char *)malloc(n*sizeof(char));
    scanf("%s",string);
    for(int i=0;i<n/2;i++){
        t=*(string+i);
        *(string+i)=*(string+n-i-1);*(string+n-i-1)=t;
    }
    printf("%s",string);
}
