#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("enter three sides : ");
    scanf("%f %f %f",&a,&b,&c);
    float s=(a+b+c)/2;
    float area=pow(s*(s-a)*(s-b)*(s-c),.5);
    printf("%.3f is area of given circle\n",area);
}