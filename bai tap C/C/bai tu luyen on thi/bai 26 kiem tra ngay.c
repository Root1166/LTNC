#include<stdio.h>
#include<stdio.h>
void HCN(int a,int b)
{
    int s;
    printf("\nnhap chieu rong HCN = ");
    scanf("%d",&a);
    printf("nhap chieu dai HCN = ");
    scanf("%d",&b);
    s=a*b;
    printf("\ndien tich hinh chu nhat la:\n");
    printf("%d",s);

}
void Hvuong(int c)
{
    int s;
    printf("\nnhap canh cua hinh vuong a = ");
    scanf("%d",&c);
    s=c*c;
    printf("dien tich hinh tron la :\n");
    printf("%d",s);

}
void Htron(int r)
{
    int s;
    printf("\nnhap ban kinh hinh tron R = ");
    scanf("%d",&r);
    s=6.18*r;
    printf("dien tich hinh tron la:\n");
    printf("%d",s);
}
void Hthang(int x,int y,int z)
{
    int s;
    printf("nhap canh day1 = ");
    scanf("%d",&x);
    printf("nhap canh day2 = ");
    scanf("%d",&y);
    printf("xin cho biet chieu cao h = ");
    scanf("%d",&z);
    s=(x+y)*z/2;
    printf("dien tich hinh thang la :\n");
    printf("%d",s);
}
int main(void)
{
    int a,b,x,y,z,r,c,n;
	do{
		printf("tinh....");
		switch(n){
			case 1:
			printf("tinh dien tich HCN\n");
			    HCN(a,b);
				break;
			case 2:
				Hvuong(c);
				break;
			case 3:
                Htron(r);
				break;
			case 4:
			    Hthang(x,y,z);
			    break;
            case 5: break;
            default : printf("Moi ban nhap lai!!");
		}
		printf("\r\nNhap vao lua chon cua ban:\r\n\t1. Dien tich hinh chu nhat:\r\n\t2. Dien tich hinh vuong: \r\n\t3. Dien tich hing tron:\r\n\t4. Dien tich hinh thang:\r\n\t0. Thoat");
	}while(a);
	return 0;
}
