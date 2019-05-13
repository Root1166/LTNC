#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
typedef struct{
    char hoten[20];
    int tuoi;
    float diem;
    char phone[15];
    char diadiem[50];
    int key;

    struct sinhvien *link;
}p_sv;

p_sv *head, *tail, *p;

void input()
{
    char hoten[20];
    int i=0,tuoi;
    float diem;
    char phone[15];
    char diadiem[50];
    char tl;
    head = NULL;
    do
    {
       printf("Nhap sanh sach cac sinh vien:\n");
       printf("Ho ten: ");
       fflush(stdin);
       gets(hoten);
       printf("\nTuoi:");
       scanf("%d",&tuoi);
       printf("\nDiemTB: ");
       scanf("%f",&diem);
       printf("\nSDT: ");
       fflush(stdin);
       gets(phone);
       printf("\nAddress: ");
       fflush(stdin);
       gets(diadiem);

       p = (p_sv *)malloc(sizeof(p_sv));
       strcpy(p->hoten,hoten);
       strcpy(p->diadiem,diadiem);
       strcpy(p->phone,phone);
       p->tuoi=tuoi;
       p->diem=diem;
       if(head==NULL)
       {
           head =  p;
           tail = p;
       }
       else
       {
           tail->link = p;
           tail = p;
       }
       p -> link = NULL;
       i++;
       printf("\nTiep tuc hay khong (C|K):");
       printf("\nBan chon: ");
       fflush(stdin);
       tl = getchar();
    }while(tl!='k');
}

void display()
{
    int i=0;
    printf("\n\t\t\t DANH SACH SINH VIEN \n");
    printf("\n%-7s %-16s %-13s %-12s %-14s %-20s","STT","HO VA TEN","  TUOI","DIEM TB","SDT","DIA CHI");
    p = head;
    while(p!=NULL)
    {
        printf("\n%-5d %-20s %-12d %-9.1f %-15s %-255s",++i,p->hoten,p->tuoi,p->diem,p->phone,p->diadiem);
        p = p -> link;
        getchar();
    }
    getchar();
}
void AddSV()
{
    char ten[20];
    int tuoi;
    float diem;
    char phone[15];
    char diadiem[50];
    p_sv *tim;
    printf("\nBan muon chen them sinh vien sau sinh vien co ten la gi:\n");
    printf("Ho ten: ");
    fflush(stdin);
    gets(ten);
    tim = head;
    while((tim != NULL)&&(strcmpi(tim->hoten,ten)))
    tim = tim ->link;
    if( tim == NULL){
        printf("\nkhong tim thay sinh vien trong danh sach\n");
    }
    else
    {
        p = (p_sv *)malloc(sizeof(p_sv));
        printf("\nMoi ban nhap thong tin con ban cua sinh vien do nhu sau!:\n");
        printf("Ho ten: ");
        fflush(stdin);
        gets(p->hoten);
        printf("\nTuoi:");
        scanf("%d",&tuoi);
        printf("\nDiemTB: ");
        scanf("%f",&diem);
        printf("\nSDT: ");
        fflush(stdin);
        gets(p->phone);
        printf("\nAddress: ");
        fflush(stdin);
        gets(p->diadiem);

        p->diem=diem;
        p->tuoi=tuoi;

        p->link = tim->link;
        tim->link = p;
        printf("\nDa chen xong");
    }
     getchar();
}
void DeleteSV()
{
    char ten[20];
    p_sv *tim,* truoc;
    printf("\nBan muon xoa sinh vien co ten la gi:\n");
    printf("Ho ten: ");
    fflush(stdin);
    gets(ten);
    tim = head;
    while((tim != NULL)&&(strcmpi(tim->hoten,ten)))
    {
        truoc = tim;
        tim = tim ->link;
    }
    if( tim == NULL){
        printf("\nkhong tim thay sinh vien trong danh sach\n");
    }
    else
    {
        if(tim == head)
        head = tim->link;
        else
        tim->link=head->link;
        free(tim);
        printf("\nDa Xoa Song\n");
    }
        getchar();
}
void Menu()
{
    char tl;
    do{
            system("cls");
            printf("\n\t\t\tCHUONG TRINH DANH SACH SINH VIEN \n");
            printf("\n\t\tHo ten: Bui Van Cong");
            printf("\t\t\tLop:AT13CLC01\n\n\n");
            printf("\n\tMENU:");
            printf("\n\t\tphim 1: nhap danh sach sinh vien  ");
            printf("\n\t\tphim 2: danh sach sinh vien ");
            printf("\n\t\tphim 3: chen them sinh vien ");
            printf("\n\t\tphim 4: Xoa sinh vien trong danh sach ");
            printf("\n\t\tphim 5: thoat ");
            printf("\n\t\t=>chon phim: ");
            fflush(stdin);
            tl = getchar();
            system("cls");
            switch(tl){
            case '1': input();        	break;
            case '2': display();     	break;
            case '3': AddSV();    		break;
            case '4': DeleteSV();       break;
            case '5': printf("\n\n\n\n\n\n\n\n\n\n\n\t\tCam on ban da su dung chuong trinh.\n\t\t\tHen gap lai ban.\n\n");   getchar();  break;
            default : printf("\n\n\n\n\n\n\n\n\n\n\n\t\tBan da chon sai phim moi ban chon lai.\n");
             getchar(); break;
        }
    }while(tl != '5');
}
int main()
{
   Menu();
   getch();
   return 0;
}
