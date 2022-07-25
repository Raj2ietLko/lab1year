//Write a program to compare two given dates.
//To store a date uses a structure that contains three members namely
//day, month and year.
//If the dates are equal then display message equal otherwise unequal.
#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
    /* data */
};


int main(){
    printf("enter first date as day month year");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    struct Date d1={a,b,c};
    printf("enter second date as day month year");
    scanf("%d %d %d",&a,&b,&c);
    struct Date d2={a,b,c};
    if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)printf("equal");
    else printf("unequal");
}