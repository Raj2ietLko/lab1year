#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;
    printf("enter coff of x^2 x and constat : ");
    scanf("%f %f %f",&a,&b,&c);
    float D=b*b-4*a*c;
    if (D==0)printf("roots are equal and are : %.3f",-b/(2*a));
    else if (D>0){
       printf(" roots are : \n %.3f  and %.3f",(-b+pow(D,.5))/(2*a),(-b-pow(D,.5))/(2*a));
    }
    else {
       D=-D;
       printf(" roots are : \n %.3f+i%.3f  and",-b/(2*a),pow(D,.5)/(2*a));
       printf("\n%.3f-i%.3f\n",-b/(2*a),pow(D,.5)/(2*a));
    }
}