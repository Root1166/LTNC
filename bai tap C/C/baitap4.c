#include <stdio.h>
#include <conio.h>

void tao_tep(FILE *fp){
   int n,m,p,i,j,x;
   fp = fopen("TICH_MT.C","wt");
   printf("\nNhap n,p,m = ");
   scanf("%d%d%d",&n,&p,&m);
   fprintf(fp,"%d %d %d\n",n,p,m);
   fprintf(fp,"MA TRAN A:\n");

   for(i = 1; i<=n; i++)
   {
	for(j = 1; j<=p ; j++)
      {
	  printf("Nhap so: ");
	  scanf("%d",&x);
	  fprintf(fp,"%d ",x);
      }
      fprintf(fp,"\n");
   }
	printf("\n\nMA TRAN B:\n");
   fprintf(fp,"MA TRAN B:\n");

   for(i = 1; i<=p; i++)
	{
	for(j = 1; j<=m ; j++)
      {
	  printf("Nhap so: ");
	  scanf("%d",&x);
	  fprintf(fp,"%d ",x);
      }
      fprintf(fp,"\n");
   }

   fclose(fp);
}

void doc_tep(FILE *fp, int a[][10], int b[][10],int *n, int *p, int *m)
{
	int i,j;
   char tg[20];
   fp = fopen("TICH_MT.C","rt");
   fscanf(fp,"%d%d%d",n,p,m);
   fgets(tg,20,fp);

   fgets(tg,20,fp);
   for(i = 1; i<=*n; i++)
   {	for(j = 1; j<=*p ; j++)
		fscanf(fp,"%d",&a[i][j]);
      fgets(tg,20,fp);
   }
   printf("\nDoc xong ma tran A.\n");

   fgets(tg,20,fp);
   for(i = 1; i<=*p; i++)
   {	for(j = 1; j<=*m ; j++)
	fscanf(fp,"%d",&b[i][j]);
      fgets(tg,20,fp);
   }
   fclose(fp);
   printf("\nDoc xong ma tran B.\n");
   printf("\nHoan tat viec doc.\n");
   getch();
}

void bo_sung(FILE *fp,int a[][10], int b[][10], int c[][10], int n, int p,int m)
{
   int i,j,k;
	fp = fopen("TICH_MT.C","at");
   fprintf(fp,"MA TRAN TICH C = A * B:\n");

   for(i = 1; i<=n; i++)
   {
	for(j = 1; j<=m ; j++)
	{
	    c[i][j] =0;
	    for(k=1;k<=p;k++)
		  c[i][j] += a[i][k] * b[k][j];
	    fprintf(fp,"%d ",c[i][j]);
      }
      fprintf(fp,"\n");
   }
   fclose(fp);
}

void in_mt(int a[][10], int n, int m, char ten)
{
    int i,j;
    printf("\n   MA TRAN %c\n",ten);
    for(i=1;i<=n;i++){
	for(j=1;j<=m;j++)
		printf("%4d",a[i][j]);
		printf("\n");
    }
}

int main()
{
	FILE *f;
	int a[10][10],b[10][10],c[10][10],n,m,p;
	char tl;
   do{

	  printf("\n\tMENU: \n");
      printf("\nPhim 1. Tao tep.");
      printf("\nPHim 2. Doc tep.");
      printf("\nPhim 3. Bo sung.");
      printf("\nPhim 4. In ma tran.");
      printf("\nPhim 5. Thoat.");

      fflush(stdin);
      printf("\n\nChuc nang ban chon: ");
      tl = getchar();

      switch(tl)
      {   case '1': tao_tep(f);
					break;
	  case '2': doc_tep(f,a,b,&n,&p,&m);
		     break;
	  case '3': bo_sung(f,a,b,c,n,p,m);
					break;
	  case '4': in_mt(a,n,p,'A');
		    in_mt(b,p,m,'B');
		    in_mt(c,n,m,'C');
		    break;
      }
      getch();
   }while(tl !='5');
}

