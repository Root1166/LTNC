#include <iostream>
#include <conio.h>
#include <stdio.h>
#include<string.h>
#define max 100
using namespace std;
typedef struct
{
    char str[max];
    int top;
}Stack;

void initialize(Stack &s)
{
    s.top = -1;
}
int Empty(Stack s)
{
    if(s.top==-1) {return 1;}
    return 0;
}
int full(Stack s)
{
    if(s.top>max-1){return 1;}
    return 0;
}
void Push(Stack &s,char st)
{
    if(full(s)==1)
    {
        cout<<"Can't Push";
    }
    else
    {
        s.top++;
        s.str[s.top]=st;
    }
}
char pop(Stack &s)
{
    char st;
    if(Empty(s)==1)
    {
         cout<<"Can't Pop";
    }
    else
    {
        st=s.str[s.top];
        s.top--;
        return st;
    }
}
/*int check(Stack &s,char *ham)
{
    int i;
    char data;
    for(i=0;i<strlen(ham);i++)
    {
        if(ham[i]=='(') push(s,ham[i]);
        else if(ham[i]==')')
        {
            if(Empty(s)==1) return 0;
            else
            {
                data=pop(s);
            }
        }
    }
    if(Empty(s)==0) return 0;
    else if(Empty(s)==1) return 1;
}*/
int priority(char a)
{
    if((a=='*')||(a=='/')) return 1;
    else return 0;
}
void Convert(Stack s,char *str1)
{
    int i,j=0,n=0;
    char A;
    char BT[max];
    for(i=0;i<strlen(str1);i++)
    {
        if(((str1[i]>='a')&&(str1[i]<='z'))||((str1[i]>='0')&&(str1[i]<='9')))//toan hang ngoai ngoac
        {
            BT[j]=str1[i];
            j++;
            n=j;
        }
        else if(str1[i]=='(')//dien bien trong ngoac
        Push(s,str1[i]);
        else if(str1[i]==')')
        {
                while(pop(s)!='(')
                {
                    BT[j]=pop(s);
                    j++;
                    n=j;
                }
                A=pop(s);
        }
        else//toan tu ngoai ngoac
        {
            if(Empty(s)==1) Push(s,str1[i]);
            else
            {
                if(s.str[s.top]=='(') Push(s,str1[i]);
                else
                {
                    if(priority(s.str[s.top])<priority(str1[i])) Push(s,str1[i]);
                    else
                    {
                            BT[j]=pop(s);
                            Push(s,str1[i]);
                            j++;
                            n=j;
                    }
                }
            }
        }
    }
    while(Empty(s)!=1)
    {
        BT[j]=pop(s);
        j++;
        n=j;
    }
    cout<<"\nBieu thuc chuyen la:";
    for(i=0;i<n;i++)
    {
        cout<<BT[i];
    }
}
int main()
{
    Stack s;
    int i,j=0,n=0;
    char str1[max],BT[max];
    initialize(s);
    cout<<"nhap chuoi bieu thuc: ";
    cin.get(str1,max);
    Convert(s,str1);
    getchar();
}
