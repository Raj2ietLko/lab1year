//Define a structure that can describe a hotel.
//It should have the member that includes the
//name, address, grade, room charge and number of rooms.
//Write a function to print out hotel of given grade in order of room charges.
#include <stdio.h>

struct Hotel{
    char name[50];
    char address[100];
    int grade;
    float roomCharge;
    int roomCount;
};


int main(){
    int n;
    printf("enter no. of hotel");
    scanf("%d",&n);
    struct Hotel tajG[n],temp;
    for(int i=1;i<=n;i++){
        printf("enter Name of hotel%d :\n",i);scanf("%s",tajG[i].name);
        printf("enter address of hotel%d :\n",i);scanf("%s",tajG[i].address);
        printf("enter grade of hotel%d :\n",i);scanf("%d",&tajG[i].grade);
        printf("enter charge of hotel%d :\n",i);scanf("%f",&tajG[i].roomCharge);
        printf("enter room count of hotel%d :\n",i);scanf("%d",&tajG[i].roomCount);
        printf("\n\n");
    }
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++){
            if(tajG[j].roomCharge>tajG[j+1].roomCharge){
                temp=tajG[j];
                tajG[j]=tajG[j+1];
                tajG[j+1]=temp;
            }
        }
    int g;
    printf("enter grade :\n");scanf("%d",&g);
    for(int i=0;i<n;i++){
        if(tajG[i].grade==g)printf("%s  %f\n",tajG[i].name,tajG[i].roomCharge);
    }
}