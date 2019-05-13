#include<conio.h>
#include<stdlib.h>
#include<string.h>
void daochuoi(char chuoi[100])
{
int n=strlen(chuoi);
for(int i=n-1;i>=0;i--)
{
printf("%s",chuoi[i]);
}
}
int main()
{
char chuoi[100];
printf"NHAP CHUOI:";
getline(chuoi,100);
daochuoi(chuoi);
return 0;
}