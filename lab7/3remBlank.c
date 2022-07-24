#include <stdio.h>

int len(char a[]){
    int i=0;
    for(;a[i]!='\0';i++);
    return i;
}

int main(){
    char a[200];
    printf("enter a string :");
    fgets(a,200,stdin);
    //scanf("%[^\n]s",a);      //this is same as above using scan set to detect newline
    int count=0,l=len(a);
    for(int i=0;i<l;i++){
        if(a[i]==' '){
            int j=i;
            while(a[j]==' ')j++;
            count++;
            a[i]=a[j];
            a[j]=' ';
        }
        else count++;
    }
    printf("your string after triming :\n%s\n",a);
    printf("total no. of char in your string : %d\n",count);
}