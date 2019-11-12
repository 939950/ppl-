#include<stdio.h>
#include<conio.h>
int sum(int a, int b)
{
    return a+b;
}

int subtraction(int a, int b)
{
    return a-b;
}

int multiplication(int a, int b)
{
    return a*b;
}
int division(int a, int b)
{
    return a/b;
}

int main()
{
       int a, b, result, o;
       printf("Enter two number\n");
       scanf("%d %d", &a, &b);
       printf("What operation do you perform. Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
       scanf("%d",&o);
       if (o==1) 
       {
       result = sum(a,b);
       printf("%d %d", result);
       }
       else if (o==2)
       {
       result = subtraction(a,b);
       printf("%d %d", result);
       }
       else if (o==3)
       {
       result = multiplication(a,b); 
       printf("%d %d", result);
       }
       else if (o==4)
       {
       result = division(a,b);
       printf("%d %d", result);
       }
       else 
       {
       printf("Please try a valid operation nummber");
       }
       getch();
       return 0;
}

                 
