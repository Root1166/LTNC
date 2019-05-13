#include <iostream>
#include <stdio.h>
#include <graphics.h>
using namespace std;
class DT
        {   int n ; // Bậc đa thức
             double *a; // Con trỏ đến Mảng chứa các hệ số của đa thức
           public:
             friend ostream& operator<<(ostream& os, const DT &d);
             friend istream& operator>>(istream& is, DT &d);

    void doi_dau() // Hàm đổi dấu đa thức
    { for (int i=0; i<=n; i++)  a[i]=-a[i]; }
         }; // Kết thúc khai báo lớp DT
       // . . . // Xây dựng các hàm bạn/phương thức bên ngoài lớp
    DT::D(int n1) // Hàm tạo có đối
    {
        n=n1; a=new double[n1+1];
    }
    DT::D(const &d) // Hàm tạo sao chép
              { n=d.n; a=new double[n+1];
                for (int i=0; i<=n; i++)
                  a[i]=d.a[i];
              }
main()
       {
          DT p;
          cout<<"\nNhap da thuc P:\n" ; cin>>p;
          cout<< "\nDa thuc p=" <<p;
          DT q(p); // Khai báo đa thức mới q được sao chép từ đa thức p
          cout<< "\nDa thuc q=" <<q; // q sẽ giống p
          q.doi_dau(); // Đổi dấu đa thức q
          cout<<"\nDa thuc p="<<p; // đến đây q sẽ khác p do có hàm tạo sao
          cout<<"\nDa thuc q="<<q; //chép. Thử bỏ hàm tạo sao chép, rồi xem
        }                        // kết quả như thế nào? Giải thích nguyên nhân tại sao?
