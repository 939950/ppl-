#include<stdio.h>
#include<conio.h>
main()
{
      int a, b, d, c;
      d=1;
      printf("Enter a base and an index");
      scanf("%d %d", &a, &b);
      for (d=1;d<=b;d++)
      {
          c=c*a;
      }
      printf("\n %d", c);
getch();
return 0;
}    
      
