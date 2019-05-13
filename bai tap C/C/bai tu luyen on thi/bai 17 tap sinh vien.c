#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int namecmp(char* s1, char* s2){
	//Return 1: s1 trÆ°á»›c s2
	// -1: s1 sau s2
	// 0: s1 == s2
	unsigned short l,l1,l2,i;
	short is=0;
	l1=strlen(s1);
	l2=strlen(s2);
	l=l1;
	is=l2-l1;
	if(l2 < l1) l=l2;
	for(i=0;i<l;i++){
		if(*(s1+i) == *(s2+i)) continue;
		if(*(s1+i) < *(s2+i)) return 1;
		else return -1;
	}
	return is;
}
char* getName(char* fullName){
 unsigned int pos;
 pos=strrchr(fullName,' ');
 if(pos==NULL) return fullName;
 pos=pos-(int)fullName;
 unsigned int len=strlen(fullName);
 len=len-pos;
 char* res="";
 res=(char*)malloc(sizeof(char)*(len));
 if(res==NULL)
	exit(printf("Malloc failed"));
 *(res+len)='\0';
 strncpy(res,fullName+pos+1,len);
 return res;
}
char* trim(char* text){
 unsigned int l=strlen(text),start=-1,end=-1,i;
 unsigned char temp;
 temp=(char*)malloc(1*sizeof(char));
 if(l<=0) return text;
 for(i=0;i<l;i++){
  if(start==-1){
	temp=*(text+i);
	if(temp!=' ' && temp!='\r' && temp!='\n' && temp!='\0' && temp!='\t')
		start=i;
  }
  if(end==-1){
	temp=*(text-i+l-1);
	if(temp!=' ' && temp!='\r' && temp!='\n' && temp!='\0' && temp!='\t')
		end=l-i;
  }
  if(start!=-1 && end !=-1)
	break;
 }
 char* res;
 res=(char*)malloc(sizeof(char)*(end-start+1));
 *(res+end-start)='\0';
 strncpy(res,text+start,end-start);
 return res;
}
char* formatName(char* fullName){
	fullName=trim(fullName);
	unsigned int l=strlen(fullName),i;
	*(fullName)=toupper(*(fullName));
	for(i=1;i<l;i++){
		if(*(fullName+i-1)==' ' || *(fullName+i-1)=='\r' || *(fullName+i-1)=='\n' || *(fullName+i-1)=='\t')
			*(fullName+i)=toupper(*(fullName+i));
		else
			*(fullName+i)=tolower(*(fullName+i));
	}
	return fullName;
}
typedef struct {
	char HoTen[50];
	float diemTB;
	char addr[255];
	char phone[15];
} SinhVien;
unsigned int n=0;
void nhapSV (SinhVien* sv){
	unsigned int i,j;
	float t;
	char* temp;
	temp=malloc(50*sizeof(char));
	for(i=0;i<n;i++){
		system("cls");
		printf("Nhap sinh vien thu %d: ",i+1);
		printf("\r\n\tHo ten: ");
		fflush(stdin);
		gets(temp);
		strcpy((sv+i)->HoTen,(char*)formatName(temp));

		printf("\r\n\tSo dien thoai: ");
		fflush(stdin);
		gets(temp);
		strcpy((sv+i)->phone,temp);

		printf("\r\n\tDia chi: ");
		fflush(stdin);
		gets(temp);
		strcpy((sv+i)->addr,temp);

		printf("\r\n\tDiem TB: ");
		scanf("%f",&t);
		(sv+i)->diemTB=t;
	}
	while(1){
		system("cls");
		printf("Da nhap %d sinh vien.\r\n\tCo nhap tiep khong? (y/n) ",n);
		fflush(stdin);
		if(getch()!='y') return;
		printf("\r\nNhap them bao nhieu? ");
		fflush(stdin);
		scanf("%d",&j);
		if((SinhVien*)realloc(sv,sizeof(sv)+j*sizeof(SinhVien))==NULL){
			printf("\r\nRealloc failed");
			exit(1);
		}
		for(i=0;i<j;i++){
			system("cls");
			printf("Nhap sinh vien thu %d: ",i+n+1);

			printf("\r\n\tHo ten: ");
			fflush(stdin);
			gets(temp);
			strcpy((sv+i+n)->HoTen,(char*)formatName(temp));

			printf("\r\n\tSo dien thoai: ");
			fflush(stdin);
			gets(temp);
			strcpy((sv+i+n)->phone,temp);

			printf("\r\n\tDia chi: ");
			fflush(stdin);
			gets(temp);
			strcpy((sv+i+n)->addr,temp);

			printf("\r\n\tDiem TB: ");
			scanf("%f",&t);
			(sv+i+n)->diemTB=t;
		}
		n+=j;
	}
}
void xemSV(SinhVien* sv){
	unsigned i;
	printf("%-5s%-28s%-15s%-10s%-255s","STT","      Ho ten","So dien thoai","Diem TB","Dia chi");
	for(i=0;i<n;i++){
		printf("\r\n%-5d%-28s%-15s%-10.2f%-255s",i+1,(sv+i)->HoTen,(sv+i)->phone,(sv+i)->diemTB,(sv+i)->addr);
	}
}
void ghiFile(char* filename,SinhVien* sv){
	unsigned i;
	FILE* fp=fopen(filename,"wb");
	fprintf(fp,"Danh sĂ¡ch sinh viĂªn lá»›p AT13CLC01\r\n");
	fprintf(fp,"%-5s%-28s%-15s%-10s%-255s","STT","    Há» tĂªn","   Sá»‘ Ä‘iá»‡n thoáº¡i","  Äiá»ƒm TB","   Äá»‹a chá»‰");
	for(i=0;i<n;i++){
		fprintf(fp,"\r\n%-5d%-28s%-15s%-10.2f%-255s",i+1,(sv+i)->HoTen,(sv+i)->phone,(sv+i)->diemTB,(sv+i)->addr);
	}
	fclose(fp);
}
void sortName(SinhVien* sv){
	unsigned int i,j;
	SinhVien *temp;
	if((temp=malloc(sizeof(SinhVien)))==NULL) exit(printf("Malloc failed"));
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(namecmp(getName((sv+i)->HoTen),getName((sv+j)->HoTen)) < 0){
				memcpy((SinhVien*)temp,(SinhVien*)(sv+i),sizeof(*(sv+i)));
				memcpy((SinhVien*)(sv+i),(SinhVien*)(sv+j),sizeof(*(sv+j)));
				memcpy((SinhVien*)(sv+j),(SinhVien*)temp,sizeof(*temp));
			}
		}
	}
}
void sortDiem(SinhVien* sv){
	unsigned int i,j;
	SinhVien *temp;
	if((temp=malloc(sizeof(SinhVien)))==NULL) exit(printf("Malloc failed"));
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if((sv+i)->diemTB < (sv+j)->diemTB){
				memcpy((SinhVien*)temp,(SinhVien*)(sv+i),sizeof(*(sv+i)));
				memcpy((SinhVien*)(sv+i),(SinhVien*)(sv+j),sizeof(*(sv+j)));
				memcpy((SinhVien*)(sv+j),(SinhVien*)temp,sizeof(*temp));
			}
		}
	}
}
int main(void){
//	return printf("'%s'",trim("Duong Thanh Vinh"));
//	return printf("%d",namecmp("Vinh","Duong"));
//	return printf("'%s'",getName(formatName("                       DUong thanh VinH  \r\n\t ")));
	SinhVien* sv;
	char* filename="C:\\Users\\Admin\\Desktop\\data.c.txt";
	char opt=0;
	do{
		system("cls");
		switch(opt){
			case 49://1
				printf("Nhap tong so sinh vien: ");
				scanf("%d",&n);
				sv=(SinhVien*)malloc(n*sizeof(SinhVien));
				nhapSV(sv);
				break;
			case 50://2
				printf("Danh Sach Sinh Vien Da Nhap:\r\n");
				xemSV(sv);
				break;
			case 51://3
				ghiFile(filename,sv);
				printf("Da ghi ra file: %s\r\n",filename);
				break;
			case 52://4
				sortDiem(sv);
				printf("Da sap xep theo diem!\r\n");
				break;
			case 53://5
				sortName(sv);
				printf("Da sap xep theo ten!\r\n");
				break;
			default:
				break;
		}
		printf("\r\nNhap vao lua chon cua ban:\r\n\t1. Nhap vao danh sach sinh vien\r\n\t2. Xem danh sach sinh vien\r\n\t3. Ghi danh sach sinh vien ra file\r\n\t4. Sap xep theo diem\r\n\t5. Sap xep theo ten\r\n\t0. Thoat");
		fflush(stdin);
		opt=getch();
	}while(opt!=48);
}
