//Write a program to take 10 integers from file and write square of these
//integer in other file.
#include <stdio.h>

int main(){
    FILE *inFile,*outFile;
    char fileName[100];
    printf("enter file name :");
    scanf("%s",fileName);
    inFile=fopen(fileName,"r");
    outFile=fopen("square.txt","w");
    int a;
    char t=fscanf(inFile,"%d",&a);
    while(t!=EOF){
        a=a*a;
        fprintf(outFile,"%d\n",a);
        t=fscanf(inFile,"%d",&a);
    }
    //fclose(inFile);fclose(outFile);
}