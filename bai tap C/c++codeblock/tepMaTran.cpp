#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
    void nhap(int a[][30],int &dong,int &cot)
    {
        printf("Nhap so dong ma tran");
        scanf("%d",&dong);
        printf("NHap so cot  ma tran");
        scanf("%d",&cot);
        for(int i=0;i<dong;i++)
            for(int j=0;j<cot;j++)
            {
                int x;
                scanf("%d",&x);
                a[i][j]=x;
            }
    }

    void sx_theo_dong(int a[][30],int dong,int cot)
    {
        for(int i=0;i<dong;i++)
        {
            for(int j=0;j<cot;j++)
                for(int k=j+1;k<cot;k++)
                {
                    int tam;
                    if(a[i][j]>a[j][k] )
                    {
                        tam=a[i][j];
                        a[i][j]=a[j][k];
                        a[j][k]=tam;
                    }
                            }
        }
    }
    void sx_theo_cot(int a[][30],int dong,int cot)
    {
        for(int i=0;i<cot;i++)
        {
            for(int j=0;j<dong;j++)
                for(int k=j+1;k<dong;k++)
                {
                    int tam;
                    if(a[i][j]>a[j][k] )
                    {
                        tam=a[i][j];
                        a[i][j]=a[j][k];
                        a[j][k]=tam;
                    }
                            }
        }
    }


    void xuat_file(FILE *f,int a[][30],int dong,int cot)
    {
        f=fopen("D:\\text1.txt","w");
            fprintf(f,"%d%c%d",dong,' ',cot);
            fputc('\n',f);
            for(int i=0;i<dong;i++)
        {

            for(int j=0;j<cot;j++)
            {

                fprintf(f,"%d",a[i][j]);
                fputc(32,f);
            }
            fputc('\n',f);
        }
        fclose(f);
    }
    void lay_file(FILE *f1,int a[][30],int &dong,int &cot)
    {
        f1=fopen("D:\\text1.txt","r");
            fscanf(f1,"%d%d",&dong,&cot);
            for(int i=0;i<dong;i++)
        {
            for(int j=0;j<cot;j++)
            {
                int x;
                fscanf(f1,"%d",&x);
                            a[i][j]=x;

            }

        }
        fclose(f1);
    }
    void xuat(int a[][30],int dong,int cot)
    {
        for(int i=0;i<dong;i++)
            for(int j=0;j<cot;j++)
                printf("%d",a[i][j]);
    }
    int tim(FILE *f,int x)
    {
        int dong,cot;
        f=fopen("D:\\text1.txt","r") ;
        fscanf(f,"%d%d",&dong,&cot);
        for(int i=0;i<dong;i++)
            for(int j=0;j<cot;j++)
            {
                int x_1;
                fscanf(f,"%d",&x_1);
                if(x==x_1)
                    return 1;
            }
        return 0;
    }

 int main()
    {
        int matran[30][30];
        int n,dong,cot,i,j;
        FILE *f,*f1;
            nhap(matran,dong,cot);

        lay_file(f1,matran,dong,cot);

            sx_theo_dong(matran,dong,cot);
        xuat_file(f1,matran,dong,cot);
            printf("%d",tim(f,6));



    }
