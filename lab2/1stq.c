/*Write a program to find the value of y for a particular value of n. The a, x, b, n is
input by user
        if n=1 y=ax%b
        if n=2 y=ax2+b2
        if n=3 y=a-bx if n=4 y=a+x/b
        */

#include <stdio.h>

int main()
{
   int n,x,a,b,y;
   printf("enter n: ");
   scanf("%d",&n);
   printf("enter a b x :");
   scanf("%d %d %d",&a,&b,&x);
   int flag=1;
   switch(n){
        case 1:
            y=a*x%b;
            break;
        case 2:
            y=a*x*x + b*b;
            break;
        case 3:
            y=a-b*x;
            break;
        case 4:
            y=(a+x)/b;
            break;
        default :
            printf("n should be less than 5\n");
            flag=0;
   }
   if (flag) printf(" y for given input is : %d\n",y);
}