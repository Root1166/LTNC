#include<bits/stdc++.h>
#define max 100
using namespace std;
int Binary(int A[max],int L,int R,int x)
{
    int M;
    if(R<L)
    {
        return -1;
        M = (L+R)/2;
        if(A[M]=x)
            return M;
        else
        {
            if(x<A[M])
                Binary(A,L,M--,x);
            else
                Binary(A,M++,R,x);
        }
    }
}

int main()
{
   int A[max];
   int n,x;
   int L=0;
   int R=n-1;
   cout<<"\t\t\tProgram Find"<<endl;
   cout<<"\t\tcode by cong"<<endl;
   cout<<"\nEnter size element: ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cout<<"\nEnter element "<<i+1<<": ";
       cin>>A[i];
   }
   cout<<"\nenter the desired element: ";
   cin>>x;
   Binary(A,L,R,x);
   int M = Binary(A,L,R,x);
   if(Binary(A,L,R,x)!=-1)
   {
      cout<<"The position of the element is: "<<M;
   }
   else
   {
      cout<<"No x element in array"<<endl;
   }
}
