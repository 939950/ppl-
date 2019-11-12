#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, i, j;
      j=1;
      printf("enter the base and index");
      scanf("%d %d", &a, &b);
      for (i=1;i<=b;i++)
      {
          j=j*a;
      }
      printf("\n %d", j);
getch();
return 0;
}    
      
