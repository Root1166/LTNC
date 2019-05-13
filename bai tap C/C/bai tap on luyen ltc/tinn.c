#include <stdio.h>

main()
{
   FILE *f;
    int n,i,j,a[30],m,x,dem=0;
    char tb[50];
    f =fopen("ma tran.c","w");
    fprintf(f,"Ma tra A\n");
    printf("\nnhap so hang so cot cua ma tran:");
    scanf("%d",&n);
    fprintf(f,"%d\n",n);
    for(i=1;i<=n;i++)
    {
            printf("\nnhap phan tu =");
            scanf("%d",&x);
            fprintf(f,"%3d",x);
    }
    fclose(f);
    printf("\n Da lap tep song. ");

    f=fopen("mat tran.c","a");
    //kiemtra so chinnh phuowng
    //Kiem tra
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i] == a[j] * a[j]){
				printf("\nBo so thoa man: %d %d.",a[i],a[j]);
				fprintf(f,"%d %d",a[i],a[j]);
			dem++;
		}
	if(dem==0)
		printf("\nKhong co bo so nao thoa man.");
    getch();

}
