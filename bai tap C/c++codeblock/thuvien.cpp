#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;
class PhieuMuon;
class Sach;
class DauSach;
class BanDoc
{
    // cac thuoc tinh cua ban doc
    char *ma;
    char *ten;
    /*
    du lieu mieu ta moi lien ket cua lop
    */
    int soMuon;
    //muoi nguoi chi muon toi da 5 quyen
    PhieuMuon *sachMuon[5];
    //
    //du lieu tinh quan lyy cac ban doc
    static int soBanDoc;
    static BanDoc *cacBanDoc[100] // toi da 100 nguoi
    //ten tep lu du lieu ban doc
    static const char *tep;


};
int main ()
{

}
