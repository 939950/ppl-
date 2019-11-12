#include<stdio.h>
#include<conio.h>
main()
{
      int a, i;
      printf ("Enter a number");
      scanf("%d", &a);
      for(i=1;i<=10;i++)
      {
              printf("\n %d. %d", i, a);
      }

getch();
return 0;
}
