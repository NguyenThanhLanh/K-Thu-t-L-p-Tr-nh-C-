#include <iostream>
#include "Bai2_10.h"

using namespace std;

int main()
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7,-8};
    cout << "Tong phan tu trong mang (khong dung de qui) :" << TinhTongPTMang1(a, 8) << endl;
    cout << "Tong phan tu trong mang (dung de qui) :" << TinhTongPTMang2(a, 8) << endl;
    cout << endl;
    cout << "Tinh tong phan tu duong trong mang (khong dung de qui): " << TinhTongPTDuongMang1(a, 8) << endl;
    cout << "Tinh tong phan tu duong trong mang (dung de qui): " << TinhTongPTDuongMang2(a, 8) << endl;
    cout << endl;
    cout << "Dem cac so nguyen to trong mang (khong dung de qui): " << DemSoLuongPTLaSNT1(a, 7) << endl;
    cout << "Dem cac so nguyen to trong mang (dung de qui): " << DemSoLuongPTLaSNT2(a, 7) << endl;
    cout << endl;
    cout << "Phan tu lon nhat mang (khong dung de qui): " << PTLonNhatMang1(a, 8) << endl;
    cout << "Phan tu lon nhat mang (dung de qui): " << PTLonNhatMang2(a, 8) << endl;
    return 0;
}