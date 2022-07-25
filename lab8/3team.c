#include <stdio.h>
#include <string.h>

struct cricket{
    char playerN[25];
    char teamN[25];
    float BAv;
};

int main(){
    struct cricket teams[50], t;
    for(int i=1;i<51;i++){
        printf("enter playerName teamName average of player %d :\n",i);
        scanf("%s %s %f",teams[i-1].playerN,teams[i-1].teamN,&teams[i-1].BAv);
    }
    for(int i=0;i<49;i++)
        for(int j=0;j<49-i;j++)
            if(strcmp(teams[j].teamN,teams[j+1].teamN)>0){
                t=teams[j];
                teams[j]=teams[j+1];
                teams[j+1]=t;
            }
    for(int i=0;i<50;i++){
        printf("%-25s  %.2f\n",teams[i].playerN,teams[i].BAv);
    }
}