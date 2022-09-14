#include "SinhVien.h"
#include<iostream>
#include<cstring>

#define MAX 100

using namespace std;

void NhapThongTinSV(SinhVien &sv){
    cout << "Nhap ma so sinh vien: " << endl; fflush(stdin); gets(sv.idsv);
    cout << "Nhap ten sinh vien: " << endl; fflush(stdin); gets(sv.namesv);
    cout << "Nhap diem tb cua sinh vien: " << endl; fflush(stdin); cin >> sv.dtb;
}
void XuatThongTinSV(SinhVien sv){
    cout << "MSSV: " << sv.idsv << "\tTen sinh vien: " << sv.namesv << "\tDiem tb cua sinh vien: " << sv.dtb << endl;
}
void TimKiemSV(SinhVien a[], char id[], int n){
    char idtmp[10];
    for(int i = 0; i< n;i++){
        strcpy(idtmp, a[i].idsv);
        if (!strcmp(id, idtmp))
        {
            XuatThongTinSV(a[i]);
            cout << "\n";
        }
    }
}
void SapXepDSSinhVien(SinhVien a[], int n, bool sapxep){
    SinhVien tmp;
    if (!sapxep)
    {
        for (int i = 0; i < n -1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                // Sắp xếp từ nhỏ tới lớn
                if (a[i].dtb > a[j].dtb)
                {
                    tmp = a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        cout << "Danh sach da sap xep tu be toi lon";  
    }
    else{
        for (int i = 0; i < n -1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                // Sắp xếp từ lớn tới nhỏ
                if (a[i].dtb < a[j].dtb)
                {
                    tmp = a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        cout << "Danh sach da sap xep tu lon toi be";
    }
}

void NhapDSSV(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "\n"  << "Nhap thong tin thu " << i+1 << endl;
        NhapThongTinSV(a[i]);
    }
}

void XuatDSSV(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        XuatThongTinSV(a[i]);
        cout << "\n";
    }
}