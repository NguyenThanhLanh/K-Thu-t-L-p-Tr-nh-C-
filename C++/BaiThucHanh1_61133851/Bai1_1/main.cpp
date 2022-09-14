#include<iostream>
#include "SinhVien.h"

using namespace std;

int main(){
    SinhVien a[100];
    int n=1;
    do
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
    } while (0 > n || n > 100);
    
    NhapDSSV(a, n);
    XuatDSSV(a, n);
    cout << "\nNhap ma so sinh vien can tim kiem (toi da 12 ki tu): "<< endl;
    char idsearch[12];
    fflush(stdin);
    gets(idsearch);
    TimKiemSV(a, idsearch, n);
    cout << "\n Chon che do sap xep sinh vien (0: tang dan, 1: giam dan)!" << endl;
    bool option;
    cin >> option;
    cout << "Danh sach sau khi sap xep: "<< endl;
    SapXepDSSinhVien(a, n, option);
    XuatDSSV(a, n);
    return 0;
}