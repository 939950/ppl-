#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    int a;
    while(n>=0)
    {
    a=n*fact(n-1);

    fact(0)=1;
}
    return fact(n);
}

int main()
{
    int a;
    printf("Enter a number to find its factorial");
    scanf("%d", &a);
    a=fact(a);
    printf("\n The factorial of the number is %d", a);
    getch();
    return 0;
}

 
    
