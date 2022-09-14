#include <iostream>
#include "XuLyMang.h"

using namespace std;

int main()
{
    int arr[100], n;
    do
    {
        cout << "Nhap vao so phan tu cua mang: (0 < n <= 100) " << endl;
        cin >> n;
    } while (n <= 0 || n > 100);
    NhapMang(arr, n);
    cout << "Mang vua nhap: " << endl;
    XuatMang(arr, n);
    // =============================================================
    cout << "\nDay cac so nguyen to: " << endl;
    TimCacSoNguyenTo(arr, n);
    // =============================================================
    cout << "\nDay cac so chinh phuong: "<< endl;
    TimSoChinhPhuong(arr, n);
    // =============================================================
    cout << "\nGia tri trung binh cua mang: " << TinhGTTrungBinh(arr, n) << endl;
    cout << "\nPhan tu lon hon gia tri trung binh: " << endl;
    PhanTuLonHonGTTB(arr, n);
    // =============================================================
    cout << "\nPhan tu lon nhat mang: " << PhanTuLonNhat(arr, n) << endl;
    // =============================================================    
    cout << "\nKiem tra ham da sap xep tang dan chua? ";
    IsHamDaSXTangDan(arr, n);
    // // =============================================================
    cout << "\nSap xep mang theo chieu tang dan! "<< endl;
    SapXepTangDan(arr, n);
    XuatMang(arr, n);
    IsHamDaSXTangDan(arr, n);
    // =============================================================
    cout << "\nSap xep mang theo chieu giam dan! "<< endl;
    SapXepGiamDan(arr, n);
    XuatMang(arr, n);
    return 0;
}