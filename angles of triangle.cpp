#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("Enter the angles of triangle");
    scanf("%d %d %d", &a, &b, &c);
    if ((a+b+c)==180)
    {
    printf("It is a valid triangle");
    }
    else// if ((a+b+c)>180)
    {
    printf("It is not a valid triangle");
    }
getch ();
return 0;
}
