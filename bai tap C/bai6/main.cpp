#include <iostream>
//#include <new.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int k;
 void error(){
    cout << "Error q[" << k << "]";
    getch();
    exit(0);

 }
int main(){
    double *q[100];
    long n;
    set_new_handler(error);
    n=10000;
    for (k=1;k<=100;k++)
        q[k] = new double(n);
    cout << " NO Error";
}

