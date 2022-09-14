#include <iostream>
#include "TronMang.h"

using namespace std;

int main()
{
    int a[50], b[50], c[50]; // khởi tạo 3 mảng
    int m ;// độ dài mảng a;
    int n ;//độ dài mảng b;
    do
    {
        cout << "Nhap do dai mang a: ";
        cin >> m;
    } while (m <= 0 || m > 50);
    NhapMang(a, m);
    cout << "\nMang vua nhap: " << endl;
    XuatMang(a, m);
    do
    {
        cout << "\nNhap do dai mang b: ";
        cin >> n;
    } while (n <= 0 || n > 50);
    NhapMang(b, n);
    cout << "\nMang vua nhap: " << endl;
    XuatMang(b, n);
    cout << "\nMang sau khi tron: " << endl;
    TronMang(a, b, c, m, n );
    return 0;
}