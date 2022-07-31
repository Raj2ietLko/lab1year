//Write a program to read number from file and then write all ‘odd’ number to file
//ODD.txt & all even to file EVEN.txt.

#include <stdio.h>

int main(){
    FILE *inFile,*ODD,*EVEN;
    char fileName[100];
    printf("enter file name :");
    scanf("%s",fileName);
    inFile=fopen(fileName,"r");
    ODD=fopen("ODD.txt","w");
    EVEN=fopen("EVEN.txt","w");
    int a;
    char t=fscanf(inFile,"%d",&a);
    while(t!=EOF){
        if(a&1)fprintf(ODD,"%d\n",a);
        else fprintf(EVEN,"%d\n",a);
        t=fscanf(inFile,"%d",&a);
    }
    fclose(inFile);fclose(ODD);fclose(EVEN);
}