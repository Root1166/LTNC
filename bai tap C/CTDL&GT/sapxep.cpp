//sinh vien Bui văn Công AT13clc

#include <bits/stdc++.h>
#define max 15
using namespace std;

 void selection_sort(int A[max],int n)
{
    int Min;
  for(int i=0; i<n-1; i++)
	{
        Min= i;
		for(int j=i+1; j<n; j++)
		{
			if(A[i]>A[j])
			{
                //Min = j;
				int temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
}
void Insert_sort(int A[max],int n)
{
    for(int i= 1;i<n;i++)
    {
        int x = A[i]; int poss=i-1;
        while((x<A[poss])&&(poss>=0))
        {
            A[poss+1] = A[poss];
            poss--;
        }
        A[poss+1] = x;
    }
}
void BuBle_sort(int A[max],int n)
{
    for(int i =0;i<n-1;i++)
     {
        for(int j = n-1;j>=i;j++)
          {
             if(A[j] < A[j-1])
                {
                    int temp=A[j];
                    A[j]=A[j-1];
                    A[j-1]=temp;
                }
          }
    }
}
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
void echo(int A[max],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<setw(6)<<A[i];
    }
}
int main()
{
    int A[max];
    int n;
    cout<<"\nEnter Array size: ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<"\nEnter Array Elements"<<i+1<<":  ";
        cin>>A[i];
    }
    cout<<"\n\t\tThe input array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<setw(6)<<A[i];
    }
    // Insert_sort:
    cout<<"\nSorting array using insert sort...\n";
    Insert_sort(A,n);
    cout<<"\nNow the Array after sorting is: ";
    echo(A,n);
    cout<<endl;
    // selection_sort:
    cout<<"\nSorting array using selection sort...\n";
    selection_sort(A,n);
    cout<<"\nNow the Array after sorting is : ";
    echo(A,n);
    cout<<endl;
    /*cout<<"\nSorting array using buble sort...\n";
    BuBle_sort(A,n);
    cout<<"\nNow the Array after sorting is : ";
    echo(A,n);
    cout<<endl;*/
    //quick_sort:
    cout<<"\nSorting array using quick sort...\n";
    quick_sort(A,n);
    cout<<"\nNow the Array after sorting is : ";
    echo(A,n);
}
