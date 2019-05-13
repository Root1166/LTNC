int main()
{
  char ten[150];
  float n,m,p,q,luong,con;
    printf("ten nguoi nhan luong:");
    scanf ("%s",&ten);
    printf("\ncho biet bac luong:\n");
    scanf("%f",&n);
    printf("\ncho biet ngay lam viec:\n");
    scanf("%f",&m);
    printf ("\ncho biet he so phu cap luong :\n");
    scanf("%f",&p);
    printf ("\ncho biet so tien tam ung:\n");
    scanf("%f",&q);
    {
        luong=(n/30)*m*p;
        con= luong-q;
    }
    printf ("Ong/Ba:%s",ten);
    printf("\nso tien luong duoc huong = %2.3f\n",luong);
    printf ("\nso tien tam ung = %2.3f\n",q);
    printf ("\nso tien con duoc linh = %2.3f\n",con);
    getch();

}
