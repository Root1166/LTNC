#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 100
void nhap(int a[], int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("nhap PT cua A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void Writefile(int a[],int n)
{
    FILE *f;
    int i;
    f =fopen("WRFile.c","wt");
    fprintf(f,"%d",n);
    for(i=1;i<=n;i++)
        fprintf(f,"\n%3d",a[i]);
    fclose(f);
}
void ReadFile(int a[],int n)
{
   FILE *f;
   int i;
   f =fopen("WRFile.c","rt");
   fscanf(f,"%d",&n);
   for(i=1;i<=n;i++)
       fscanf(f,"%3d",&a[i]);
   fclose(f);
}
void echoFile(int a[],int n)
{
    int i;
    printf("\nKet Qua Doc File:\n\n");
    for( i=1;i<=n;i++)
        printf("%3d",a[i]);
}
int main()
{
    int a[max];
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    nhap(a,n);
    Writefile(a,n);
    ReadFile(a,n);
    echoFile(a,n);
}
