#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Sinh viên Dương Thành Vịnh - AT13CLC01

typedef struct {
		char hoTen[25];
		float diemTB;
} SinhVien;

void nhapSV(SinhVien **svPTR, unsigned int *soSV){
	if(*svPTR!=NULL)
		free(*svPTR);
	printf("Nhap tong so sinh vien: ");
	fflush(stdin);
	scanf("%d",soSV);
	unsigned int i;
	char hoTen[25];
	float diemTB;
	*svPTR=(SinhVien *)malloc(*soSV*sizeof(SinhVien));
	for(i=0;i<*soSV;i++){
		system("cls");
		printf("Nhap thong tin sinh vien thu %d:\r\n",i+1);
		printf("\tHo va ten: ");
		fflush(stdin);
		gets(hoTen);
		printf("\tDiem TB: ");
		scanf("%f",&diemTB);
		strcpy((*svPTR+i)->hoTen,hoTen);
		(*svPTR+i)->diemTB=diemTB;
	}
	system("cls");
	printf("Da nhap %d sinh vien !",*soSV);
	ghiFileSV(*svPTR,*soSV); // Ghi ra file
}

void xemSV(SinhVien *sv,unsigned int soSV){
	printf("\t\tDanh Sach Sinh Vien\r\n");
	printf("%-5s %-28s %-8s\r\n","STT","Ho va Ten","Diem TB");
	unsigned int i;
	for(i=0;i<soSV;i++){
		printf("%-5d %-28s %5.2f\r\n",i+1,(sv+i)->hoTen,(sv+i)->diemTB);
	}
	ghiFileSV(sv,soSV); // Ghi ra file
}

void ghiFileSV(SinhVien *sv,unsigned int soSV){
	char *filename="SinhVien.txt";
	FILE *fp=fopen(filename,"wb");
	fprintf(fp,"\t\tDanh Sách Sinh Viên\r\n");
	fprintf(fp,"%-5s %-28s %-8s\r\n","STT","Họ và Tên","    Điểm TB");
	unsigned int i;
	for(i=0;i<soSV;i++){
		fprintf(fp,"%-5d %-28s %5.2f\r\n",i+1,(sv+i)->hoTen,(sv+i)->diemTB);
	}
	fclose(fp);
}

// Hàm lấy tên từ họ tên (Viết bằng điện thoại đấy, hí hí)
char* getName(char* fullName){
 unsigned int pos;
 pos=strrchr(fullName,' ');
 if(pos==NULL) return fullName;
 pos=pos-(int)fullName;
 unsigned int len=strlen(fullName);
 len=len-pos;
 char* res="";
 res=(char*)malloc(sizeof(char)*(len+1));
 if(res==NULL)
	exit(printf("Malloc failed"));
 *(res+len)='\0';
 strncpy(res,fullName+pos+1,len);
 return res;
}

// Chuyển tên sang không viết hoa: Vinh => vinh để tiện cho việc so sánh tên
char* strtolower(char *str){
	unsigned int len=strlen(str);
	char *res="";
	res=(char*)malloc((len+1)*sizeof(char));
	unsigned int i=0;
	while(*(str+i)){
		*(res+i)=tolower(*(str+i));
		i++;
	}
	*(res+len)='\0';
	return res;
}

int timSV(SinhVien *sv,unsigned int soSV){
	// Trả về số index của sinh viên tìm được, -1 là không tìm thấy
	printf("Nhap ten sinh vien muon tim: ");
	fflush(stdin);
	char ten[20];
	gets(ten);
	unsigned int found=0,stt,i;
	printf("%-5s %-28s %-8s\r\n","STT","Ho va Ten","Diem TB");
	for(i=0;i<soSV;i++){
		if(strcmp(strtolower(ten),strtolower(getName((sv+i)->hoTen))) ==0 ){
			stt=i;
			printf("%-5d %-28s %5.2f\r\n",i+1,(sv+i)->hoTen,(sv+i)->diemTB);
			found++;
		}
	}
	if(found == 0){
		printf("Khong tim thay sinh vien co ten \"%s\" !",ten);
		return -1;
	}
	if(found == 1) return stt;
	printf("Nhap so thu tu cua sinh vien phu hop: ");
	scanf("%d",&stt);
	return stt-1; // Vì trả về index nên stt phải trừ 1
}

void suaSV(SinhVien *sv,unsigned int soSV){
	int index=timSV(sv,soSV);
	if(index == -1)
		return;
	printf("\r\nNhap diem trung binh moi: ");
	float diemTB;
	scanf("%f",&diemTB);
	(sv+index)->diemTB=diemTB;
	printf("Da thay doi xong !");
}

int main(void){
	// Sinh viên Dương Thành Vịnh - AT13CLC01
	unsigned short opt;
	SinhVien *sv=NULL; // Danh sách sinh viên
	unsigned int soSV=0; // Tổng số sinh viên
	do{
		system("cls");
		printf("\t\tDanh Sach Chuc Nang\r\n");
		printf("1. Tao danh sach\r\n");
		printf("2. Hien thi danh sach\r\n");
		printf("3. Sua diem\r\n");
		printf("4. Ket thuc\r\n");
		printf("=> Chon: ");
		fflush(stdin);
		scanf("%d",&opt);
		system("cls");
		switch(opt){
			case 1:
				nhapSV(&sv,&soSV);
				break;
			case 2:
				xemSV(sv,soSV);
				break;
			case 3:
				suaSV(sv,soSV);
				break;
			case 4:
				exit(0);
			default:
				printf("Khong co bai tap nay!");
		}
		getch();
	}while(opt!=4);
	return 0;
}
