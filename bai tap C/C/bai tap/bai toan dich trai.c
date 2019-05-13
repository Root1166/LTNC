int main()
{
    int n,m,k;
    printf("nhap so thu nhat n = ");
    scanf("%d",&n);
    printf (" nhap so thu hai m = ");
    scanf("%d",&m);
    k=n<<m;
    k=n+++m;
    k=(n>m)?n:m;
    printf ("so lon hon hai so vua nhap la %d\n",k);
    printf("gia tri=%d\n",k);
    printf("so %d qua trai %d he co so 10 = %d\n",n,m,k);
    printf("so %d qua trai %d he co so 8 = %o\n",n,m,k);
    printf("so %d qua trai %d he co so 16 = %x\n",n,m,k);
    getch();

}
