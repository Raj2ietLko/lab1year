#include <stdio.h>

int main(){
    int math,chem,phy,sum,phy_math;
    printf("enter no. of phy chem and math ;");
    scanf("%d %d %d",&phy,&chem,&math);
    sum=math+chem+phy;
    phy_math=sum-chem;
    if(phy>40 && math>60 && chem>50 && (sum>200 || phy_math>150)){
        printf("yes she/he is eligible \n");
    }
    else printf("not eligible\n");
}