//code by hoc vien Bui van cong. AT13CLC01
#include <bits/stdc++.h>
#define max 100
using namespace std;

int BinarySeach(int A[max],int l,int r ,int x)
{
    if(l>r)
    {
        return -1;
    }
    else{
        int M = (l+r)/2;
        if(A[M]==x)
        {
            return M;
        }
        if(x<A[M])
        {
            BinarySeach(A,l,M-1,x);
        }
        else{
            BinarySeach(A,M+1,r,x);
            }
        }
    }

int main()
{
    int A[max];
    int n,x;
    int m;
    cout<<"\n\t\tProgramming Seach by binary"<<endl;
    cout<<"\t\tcode by bui van cong"<<endl;
    cout<<"Enter size element: ";
    cin>>n;
    for(int i=0;i<
    n;i++)
    {
        cout<<"Enter Array element "<<i+1<<":  ";
        cin>>A[i];
    }
    cout<<"Enter element to seach: ";
    cin>>x;
    int l=0;
    int r=n-1;
    if((m=BinarySeach(A,l,r,x))!=-1)
        cout<<"vi tri cua phan tu: "<<m+1;
    else
        cout<<"k co trong mang";


}
