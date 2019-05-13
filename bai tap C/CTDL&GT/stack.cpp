#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
#define max 50
typedef struct sta
{
    char str[max];
    int top;
}s;
void initialize(sta &s)
{
    s.top=-1;
}
int full(sta s)
{
    if(s.top==(max-1)) return 1;
    return 0;
}
int emp(sta s)
{
    if(s.top==-1) return 1;
    return 0;
}
void push(sta &s,char st)
{
    if(full(s)==0)
    {
        s.top++;
        s.str[s.top]=st;
    }
}
char pop(sta &s)
{
    char st;
    if(emp(s)==0)
    {
        st=s.str[s.top];
        s.top--;
        return st;
    }
}
/*int check(sta &s,char ham[50])
{
    int i;
    char data;
    for(i=0;i<strlen(ham);i++)
    {
        if(ham[i]=='(') push(s,ham[i]);
        else if(ham[i]==')')
        {
            if(emp(s)==1) return 0;
            else
            {
                data=pop(s);
            }
        }
    }
    if(emp(s)==0) return 0;
    else if(emp(s)==1) return 1;
}*/
int priority(char a)
{
    if((a=='*')||(a=='/')) return 1;
    else return 0;
}
int main()
{
    int i=0,j=0,n=0;
    sta s;
    char ham[50],bieu_thuc[50],data;
    initialize(s);
    cout<<"Nhap bieu thuc:";
    cin.get(ham,50);
    /*if(check(s,ham)==0) cout<<"Bieu thuc vua nhap la sai!"<<endl;
    else cout<<"Bieu thuc vua nhap la dung!"<<endl;*/
    for(i=0;i<strlen(ham);i++)
    {
        if((ham[i]>='a')&&(ham[i]<='z'))//toan hang ngoai ngoac
        {
            bieu_thuc[j]=ham[i];
            j++;
            n=j;
        }
        else if(ham[i]=='(')//dien bien trong ngoac
        push(s,ham[i]);
        else if(ham[i]==')')
        {
                while(pop(s)!='(')
                {
                    bieu_thuc[j]=pop(s);
                    j++;
                    n=j;
                }
                data=pop(s);
        }
        else//toan tu ngoai ngoac
        {
            if(emp(s)==1) push(s,ham[i]);
            else
            {
                if(s.str[s.top]=='(') push(s,ham[i]);
                else
                {
                    if(priority(s.str[s.top])<priority(ham[i])) push(s,ham[i]);
                    else
                    {
                            bieu_thuc[j]=pop(s);
                            push(s,ham[i]);
                            j++;
                            n=j;
                    }
                }
            }
        }
    }
    while(emp(s)!=1)
    {
        bieu_thuc[j]=pop(s);
        j++;
        n=j;
    }
    cout<<"\nBieu thuc chuyen la:";
    for(i=0;i<n;i++)
    {
        cout<<bieu_thuc[i];
    }
}
