#include<conio.h>
#include<stdio.h>
main()
{
      char c;
      printf("Nhap vao 1 ki tu tu ban phim ");
      scanf("%c",&c);

      if (c>='a' && c<='z' )
      {
               c=c-32;
               printf("Ki tu ban vua nhap la %c\n", c);
      }
      else if (c>='A' && c<='Z')
      {
           c=c+32;
           printf("Ki tu ban vua nhap la %c\n", c);
      }
      else if (c>='0' && c<='9')
      printf("Ki tu ban vua nhap la so %c\n",c);
      else
      printf("Ban da nhap ki tu %c\n",c);
      getch();
}
