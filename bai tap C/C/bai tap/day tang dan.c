int main()
{
    int n,i,j;
    float a[30],temp;
    printf ("nhap gia tri cua n = ");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("\nnhap day a[%d]=",i);
        scanf("%f",&a[i]);
    }
    printf ("\nday vua nhap la\n");
     for (i=0;i<n;i++)
        printf("%3.0f",a[i]);
     {
         for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
         {
             if (a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }
      printf ("\nday duoc xap xep theo chieu tang dan la:\n");
          for (i=0;i<n;i++)
            printf("%3.0f",a[i]);
          getch();
}
