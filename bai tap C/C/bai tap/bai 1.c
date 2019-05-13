#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\t\t\t************************\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**     Bui van cong   **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**      (*  ^  *)     **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t************************\n");
    int i,j,n,m,k,p;
    printf ("\nnhap gia tri cua  hang n = ");
    scanf ("%d",&n);
    printf ("nhap gia tri cua cot m = ");
    scanf ("%d",&m);
    printf ("nhap gia tri cua p = ");
    scanf ("%d",&p);
    int a[n][m],b[n][m],c[n][m];
    printf ("nhap gia tri cua ma tran A (%d:%d):\n\n",n,m);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
        printf ("day ma tran vua nhap vao A la:\n");
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            printf ("%6d",a[i][j]);
            printf ("\n");
        }
    printf ("nhap gia tri cua ma tran B (%d:%d):\n\n",n,m);
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
        printf ("day ma tran vua nhap vao B la:\n");
        for (i=0;i<n;i++)
        {
            for (j=0;j<m;j++)
            printf ("%6d",a[i][j]);
            printf ("\n");
        }
         c[i][j];
         for (k=0;k<p;k++)
         c[i][j]=a[i][k]*b[k][j];
        {
        printf ("gia tri cua nhan hai ma tran la:\n");
        printf ("%6d",c[i][j]);
        printf ("\n");
        getch ();
      }

}
