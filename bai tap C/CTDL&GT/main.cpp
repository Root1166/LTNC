#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<iostream>
#define max 100
using namespace std;
typedef struct{
    int A[max];
    int top;
}Stack;
void Init(Stack &s)
{
    s.top = -1;
}
void Push(Stack &s,int x)
{
    if(s.top>max-1)
    {
        cout<<"Can't Push";
    }
    else{
        s.top++;
        s.A[s.top] = x;
    }
}
int pop(Stack &s)
{
    int x;
    if(s.top<-1)
    {
        cout<<"Can't POP";
    }
    else{
        x = s.A[s.top];
        s.top --;
        return x;
    }
}
int check(Stack s,char *str)
{
    int i;
    int count =0;
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]=='(')||(str[i]=='{')||(str[i]=='['))
          Push(s,str[i]);
        else if(str[i]==')')
        {
            if(s.top!=-1)
            {
                if(pop(s)!='(')
                  return 0;
            }
            else
            Push(s,str[i]);
        }
        else if(str[i]=='}')
        {
            if(s.top!=-1)
            {
                if(pop(s)!='{')
                    return 0;
            }
            else
                Push(s,str[i]);
        }
      else if(str[i]==']')
        {
            if(s.top!=-1)
            {
              if(pop(s)!='[')
                return 0;
            }
            else
              Push(s,str[i]);
      }
      else if(str[i]=='"')
      {
        count++;
        if(count%2!=0)
        {
          Push(s,str[i]);
        }
        else
        {
            if(pop(s)!='"')
            return 0;
        }
      }
    }
  if(s.top==-1)
    return 1;
  else
    return 0;
}
int main()
{
    Stack s;
    Init(s);
    char str1[max];
    cout<<"nhap chuoi: ";
    cin.get(str1,max);
    cin.ignore();
    if(check(s,str1))
    {
        cout<<"Dung roi. ";
    }
    else
    {
        cout<<"sai";
    }
    getchar();
}
