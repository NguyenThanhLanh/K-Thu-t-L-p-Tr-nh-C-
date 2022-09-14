#include <iostream>
#include "MaTran.h"

using namespace std;

int main()
{
    int a[100][100];
    int m, n;
    do
    {
        cout << "Nhap so hang: (0 < m <= 100) " << endl;
        cin >> m;
    } while (m <= 0 || m > 100 );
    do
    {
        cout << "Nhap so cot: (0 < n <= 100)" << endl;
        cin >> n;
    } while (n <= 0 || n > 100);

    NhapMaTran(a, m, n);
    cout << "Mang vua nhap: " << endl;
    XuatMaTran(a, m, n);
    cout << "Tinh trung binh cong ma tran: "<< endl;
    TrungBinhCongMT(a, m, n);
    cout << "\nTim phan tu lon nhat cua ma tran! " << endl;
    PhanTuLonNhatMT(a, m, n);
    cout << "Tim phan tu lon nhat tren dong! (bat dau tu 1) "<< endl;
    int r;
    cout << "Nhap dong can tim kiem: ";
    cin >> r;
    PhanTuLonNhatDongIMT(a, m, n, r);
    cout << "\nPhan tu lon nhat tren cot! (bat dau tu 1)"<< endl;
    int cl;
    cout << "Nhap cot can tim kiem: ";
    cin >> cl;
    PhanTuLonNhatCotJMT(a, m, n, cl);
    DemSoNguyenToTrongMT(a, m, n);
    SapXepMaTran(a, m, n);
    cout << "Ma tran sau khi sap xep: " << endl;
    XuatMaTran(a, m, n);
    return 0;
}