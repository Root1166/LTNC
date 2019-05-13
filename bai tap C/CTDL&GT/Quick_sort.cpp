#include<iostream>
#include<bits/stdc++.h>
#define max 100
using namespace std;
void QS(int A[max],int left,int right)
{
    int i,j,x,y;
    i=left;
    j=right;
    x=A[(left+right)/2];
    do
    {
        while(A[i]<x && i<right) i++;
        while(A[j]>x && j>left) j--;
        if(i<=j)
        {
            y = A[i];
            A[i] = A[j];
            A[j] = y;
            i++;j--;
        }
    } while(i<=j);
    if(left<j)
    QS(A,left,j);
    if(i<right)
    QS(A,i,right);
}
void quick_sort(int A[max],int n)
{
    QS(A,0,n-1);
}
int main()
{
    int n;
    int A[max];
    cout<<"\nEnter Array size: ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<"\nEnter Array Elements"<<i+1<<":  ";
        cin>>A[i];
    }
    cout<<"\nSorting array using quick sort...\n";
    quick_sort(A,n);
    cout<<"\nNow the Array after sorting is : ";
    for(int i=0;i<n;i++)
        cout<<A[i] << "  ";
}
