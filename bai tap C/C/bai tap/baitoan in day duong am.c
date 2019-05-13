int main()
{
    int i,j,n,Z,Sduong,Sam;
    float a[30];
    printf ("nhap n = ");
    scanf ("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nnhap phan tu a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    printf("\nday vua nhap la:\n");
    for(i=0;i<n;i++)
        printf("%6.0f",a[i]);
    //xap xep
    for(i=0;i<n;i++)
        {
            if(a[i]>0)
                {
                    Sduong=a[i];
                    printf ("\nso duong trong day la:%d",Sduong);


                }
            else  if(a[i]<0)
          {
              Sam=a[i];
              printf("\nso am trong day la:\n");
                printf ("%6.0d",Sam);
          }
        }
        getch();

       }








