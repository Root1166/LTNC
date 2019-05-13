#include<iostream>
using namespace std;
typedef struct node
{
    int somu,heso;
    node *tiep;
}nut;
typedef struct da_thuc
{
    node *p_dau;
    node *p_cuoi;
}DT;
void tao_DT(DT &L)
{
   int i,n;
   node *p;
   L.p_dau=L.p_cuoi=NULL;
   cout<<"Nhap so bac cua da thuc:";
   cin>>n;
   for(i=0;i<n;i++)
   {
        p=new node;
        cout<<"So he so va so mu:";
        cin>>p->heso>>p->somu;
        if(L.p_dau==NULL)
        {
            L.p_dau=L.p_cuoi=p;
        }
        else
        {
            L.p_cuoi->tiep=p;
            L.p_cuoi=p;
        }
        L.p_cuoi->tiep=NULL;
    }
}
void in(DT L)
{
    node *p;
    p=L.p_dau;
    cout<<p->heso<<"x^"<<p->somu;
    p=p->tiep;
    while(p!=NULL)
    {
        if(p->somu==0) cout<<"+"<<p->heso;
        else if(p->heso==0);
        else if(p->heso<0)
        {
            cout<<p->heso<<"x^"<<p->somu;
        }
        else if((p->heso>0)&&(p->somu!=0))
        cout<<"+"<<p->heso<<"x^"<<p->somu;
        p=p->tiep;
    }
}
void them(DT &L1, node *p)
{
    node *p_TG;
    p_TG=new node;
    p_TG->heso=p->heso;
    p_TG->somu=p->somu;
    if(L1.p_dau==NULL)
    {
        L1.p_dau=L1.p_cuoi=p_TG;
    }
    else
    {
      L1.p_cuoi->tiep=p_TG;
      L1.p_cuoi=p_TG;
    }
    L1.p_cuoi->tiep=NULL;
}
void cong(DT &L1,DT &L2,DT &L3)
{
    node *p,*q,*p1;
    p=L1.p_dau;
    q=L2.p_dau;
    L3.p_dau=L3.p_cuoi=NULL;
    while((p!=NULL)&&(q!=NULL))
    {

        if(p->somu>q->somu)
        {
            them(L3,p);
            p=p->tiep;
        }
        else if(q->somu>p->somu)
        {
            them(L3,q);
            q=q->tiep;
        }
        else if(p->somu==q->somu)
        {
            p1=new node;
            p1->heso=p->heso+q->heso;
            p1->somu=p->somu;
            them(L3,p1);
            p=p->tiep;
            q=q->tiep;
        }
    }
    if(p!=NULL)
    {
        while(p!=NULL)
        {
            them(L3,p);
            p=p->tiep;
        }
    }
    else if(q!=NULL)
    {
        while(q!=NULL)
        {
            them(L3,q);
            q=q->tiep;
        }
    }
}
int main()
{
    DT a,b,c;
    cout<<"Nhap da thuc a:"<<endl;
    tao_DT(a);
    cout<<"Da thuc vua nhap la:";
    in(a);
    cout<<"\nNhap da thuc b:"<<endl;
    tao_DT(b);
    cout<<"Da thuc vua nhap la:";
    in(b);
    cong(a,b,c);
    cout<<"\nTong 2 da thuc a va b la:"<<endl;
    in(c);
}
