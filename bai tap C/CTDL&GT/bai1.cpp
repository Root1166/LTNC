#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
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
int Empty(Stack s)
{
   if(s.top=-1){return 1;}
   return 0;
}
int full(Stack s)
{
    if(s.top = max-1) {return 1;}
    return 0;
}
void change(Stack &s,int n,int a)
{
    int i=0;
    while(1)
    {
        s.A[i]=n%a;
        s.top++;
        i++;
        if(n==0) break;
        n=n/a;
    }
}
void Push(Stack &s,int x)
{
    if(full(s)==0)
    {
        s.top ++;
        s.A[s.top] = x;
    }
}
int pop(Stack &s)
{
    int x;
    if(Empty(s)==0)
    {
        x = s.A[s.top];
        s.top --;
        return x;
    }
}
void display(Stack s)
{
    for(int i=0;i<s.top;i++)
    {
        if(s.A[i]<10)
        {
            cout<<s.A[i];

        }
        else if(s.A[i]==10)
        {
            cout<< "A";
        }
        else if(s.A[i]==11)
        {
            cout<< "B";
        }
        else if(s.A[i]==12)
        {
            cout<< "C";
        }
        else if(s.A[i]==13)
        {
            cout<< "D";
        }
        else if(s.A[i]==14)
        {
            cout<< "E";
        }
        else if(s.A[i]==15)
        {
            cout<< "F";
        }
    }
}
int main()
{
    Stack s;
    int n,a;
    Init(s);
    cout<<"nhap n= ";
    cin>>n;
    cout<<"nhap a= ";
    cin>>a;
    change(s,n,a);
    display(s);
    return 0;
}

