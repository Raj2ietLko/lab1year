#include <stdio.h>

int main(){
    float basic_salary,DA=25,HRA=15,PF=10;
    printf("enter basic salary :");
    scanf("%f",&basic_salary);
    float gross=basic_salary*(1+(DA+HRA)/100);
    float net=gross*(1-PF/100);
    printf("%.2f is net salary of given person\n",net);
}