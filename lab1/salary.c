#include <stdio.h>

int main(){
    float basic_salary,DA=25,HRA=15,PF=10;
    scanf("%f",&basic_salary);
    float net_salary=basic_salary*(1+(DA+HRA-PF)/100);
    printf("%.2f is net salary of given person\n",net_salary);
}