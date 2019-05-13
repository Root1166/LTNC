#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <math.h>
using namespace std;
typedef struct NODE
{
	char data;
	NODE *next;
};

typedef NODE *pnode;

typedef struct STACK
{
	pnode H,T;
};

void Init(STACK &S);
int IsEmpty(STACK S);
pnode GetNode(char x);
void AddFirst(STACK &S, pnode p);
void InsertHead(STACK &S, char x);
char RemoveHead(STACK &S);
char Tops(STACK &S);
void Output(STACK S);
char *Convert(char x[100]);
double Posfix(char x[100]);



int main()
{
	//clrscr();
	cout<<"CHUONG TRINH TIN GIA TRI BIEU THUC ( Chi Ap Dung Cac phep Toan +,-,*,/,^,(,) )";
	cout<<"\n\n\nNhap Bieu Thuc Can Tinh: ";
	char bt[100];
	gets(bt);
	cout<<"\nKho Qua, Doi Vai Giay Nha!!!...";

//	delay(500);

	cout<<"\n\nHjHj! Bieu Thuc Vua Nhap: "<<bt;
	cout<<"\nVa Ket Qua: "<<Convert(bt);
	getch();
}

int DoUuTien(char x)
{
	if(x == '^')
		return 3;
	else
		if(x == '*' || x == '/')
			return 2;
		else
			if(x == '+' || x == '-')
				return 1;
	return 0;
}

char *Convert(char bt[100])
{
	STACK S;
	Init(S);

	char p[100];
	int j = 0;

	/*cout<<"\nNhap Bieu Thuc Can Tinh Vao:\n";
	gets(bt);*/

	int ilen = strlen(bt);

	for(int i = 0; i < ilen; i++)
	{
		if(bt[i] == '(')
		{
			//Push vao Stack
			InsertHead(S,bt[i]);
		}
		else
			if(bt[i] == ')')
			{
				char Pop = RemoveHead(S);
				while(Pop != '(')
				{
					//Lay bo vao chuoi cho den khi gap dau '('
					p[j] = Pop;
					j++;
					Pop = RemoveHead(S);
				}
			}
			else
				//Neu la so
				if(DoUuTien(bt[i]) == 0 )
				{
					p[j] = bt[i];
					j++;
				}
				else
					if(bt[i] == '^')
					{
						if(IsEmpty(S) == 1)
							InsertHead(S,bt[i]);
						else
						{
							char Top = Tops(S);
							if(DoUuTien(bt[i]) > DoUuTien(Top))
								InsertHead(S,bt[i]);
							else
							{
								while(Top != '^')
								{
									p[j] = RemoveHead(S);
									j++;
									Top = Tops(S);
								}
								InsertHead(S,bt[i]);
							}
						}
					}
					else
						if(bt[i] == '*')
						{
							if(IsEmpty(S) == 1)
								InsertHead(S,bt[i]);
							else
							{
								char Top = Tops(S);
								if(DoUuTien(bt[i]) > DoUuTien(Top))
									InsertHead(S,bt[i]);
								else
								{
									while(DoUuTien(bt[i]) <= DoUuTien(Top))
									{
										p[j] = RemoveHead(S);
										j++;
										Top = Tops(S);
									}
									InsertHead(S,bt[i]);
								}
							}
						}
						else
							if(bt[i] == '/')
							{
								if(IsEmpty(S) == 1)
									InsertHead(S,bt[i]);
								else
								{
									char Top = Tops(S);
									if(DoUuTien(bt[i]) > DoUuTien(Top))
										InsertHead(S,bt[i]);
									else
									{
										while(DoUuTien(bt[i]) <= DoUuTien(Top))
										{
											p[j] = RemoveHead(S);
											j++;
											Top = Tops(S);
										}
										InsertHead(S,bt[i]);
									}
								}
							}
							else
								if(bt[i] == '+')
								{
									if(IsEmpty(S) == 1)
										InsertHead(S,bt[i]);
									else
									{
										char Top = Tops(S);
										if(DoUuTien(bt[i]) > DoUuTien(Top))
											InsertHead(S,bt[i]);
										else
										{
											while(DoUuTien(bt[i]) <= DoUuTien(Top))
											{
												p[j] = RemoveHead(S);
												j++;
												Top = Tops(S);
											}
											InsertHead(S,bt[i]);
										}
									}
								}
								else
									if(bt[i] == '-')
									{
										if(IsEmpty(S) == 1)
											InsertHead(S,bt[i]);
										else
										{
											char Top = Tops(S);
											if(Top != '^' && Top != '*' && Top != '/' && Top != '+' && Top != '-')
												InsertHead(S,bt[i]);
											else
											{
												while(Top == '^' || Top == '*' || Top == '/' || Top == '+' || Top == '-')
												{
													p[j] = RemoveHead(S);
													j++;
													Top = Tops(S);
												}
												InsertHead(S,bt[i]);
											}
										}
									}
	}//Het vong for
	fflush(stdin);
	while(!IsEmpty(S))
	{
		p[j] = RemoveHead(S);
		j++;
	}
	p[j] = '\0';

	return p;
}

double Posfix(char p[100])
{

	STACK A;
	Init(A);

	int ilength = strlen(p);
	for(int i = 0; i < ilength; i++)
	{
		if(p[i] >= '0' && p[i] <= '9')
		{
			int itoanhang = p[i] - '0';
			InsertHead(A,itoanhang);
		}
		else
		{
			int iso2 = RemoveHead(A);

			int iso1 = RemoveHead(A);

			if(p[i] == '+')
			{
				int iketqua = iso1 + iso2;

				InsertHead(A,iketqua);
			}
			else
				if(p[i] == '-')
				{
					int iketqua = iso1 - iso2;

					InsertHead(A,iketqua);
				}
				else
					if(p[i] == '*' || p[i] == 'x')
					{

						int iketqua = iso1 * iso2;

						InsertHead(A,iketqua);
					}
					else

						if(p[i] == '/' || p[i] == ':')
						{
							int iketqua = iso1 / iso2;

							InsertHead(A,iketqua);
						}
						else
							if(p[i] == '^')
							{
								int iketqua = pow(iso1,iso2);

								InsertHead(A,iketqua);
							}
		}
	}
	double ketqua = RemoveHead(A);
	//Khong Can Ham RemoveList, Vi Het Roi
	return ketqua;
}


void Init(STACK &A)
{
	A.H = A.T = NULL;
}

int IsEmpty(STACK A)
{
	if(A.H == NULL)
		return 1;
	return 0;
}

pnode GetNode(char x)
{
	pnode p;
	p = new NODE;
	if(p == NULL)
		return NULL;
	p->data = x;
	p->next = NULL;
	return p;
}

void AddFirst(STACK &A, pnode p)
{
	if(IsEmpty(A) == 1)
		A.H = A.T = p;
	else
	{
		p->next = A.H;
		A.H = p;
	}
}

//Tuong Duong Voi Ham Push
void InsertHead(STACK &A, char x)
{
	pnode p;
	p = GetNode(x);
	if(p == NULL)
	{
		cout<<"Khong Du Bo Nho";
		return;
	}
	AddFirst(A,p);
}

//Tuong duong voi ham Pop
char RemoveHead(STACK &A)
{
	pnode p;
	char x = '\0';
	if(A.H != NULL)
	{
		p = A.H;
		x = p->data;
		A.H = A.H->next;
		delete p;
		if(A.H == NULL)
			A.T = NULL;
	}
	return x;
}

char Tops(STACK &A)
{
	if(IsEmpty(A) == 1)
		return '\0';
	char x = A.H->data;
	return x;
}

void Output(STACK A)
{
	pnode p;
	p = A.H;
	while(p != NULL)
	{
		cout<<p->data;
		p = p->next;
	}
}
