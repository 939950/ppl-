#include<stdio.h>
#include<conio.h>
int main ()
{
    int g, y, q, s, a;
    printf("Enter your gender (male=1, female=0), number of years of service and qualification(graduate=0, post graduate=1)");
    scanf("%d %d %d", &g, &y, &q);
    if (g==1 && y>=10 && q==1)
    {
    s=15000;
    }
    else if (g==1 && y>=10 && q==0)
    {
    s=10000;
    }
    else if (g==1 && y<10 && q==1)
    {
    s=10000;
    }
    else if (g==1 && y<10 && q==0)
    {
    s=7000;
    }
    else if (g==0 && y>=10 && q==1) 
    {
    s=12000;
    }
    else if (g==0 && y>=10 && q==0)
    {
    s=9000;
    }
    else if (g==0 && y<10 && q==1)
    {
    s=10000;
    }
    else if (g==0 && y<10 && q==0)
    {
    s=6000;
    }
    printf("\n The salary is %d", s);
    getch();
    return 0;
}
