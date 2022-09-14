#include <iostream>
#include "BaiTap.h"

using namespace std;

int main()
{
    float a = 2;
    int n = 4;
    cout << "Tinh luy thua bang vong lap: " << TinhLuyThua1(a, n) << endl;
    cout << "Tinh luy thua bang de qui: " << TinhLuyThua2(a, n) << endl;
    cout << "===============================================" << endl;
    cout << "Tinh giai thua bang vong lap: " << TinhGiaiThua1(n) << endl;
    cout << "Tinh giai thua bang de qui: " << TinhGiaiThua2(n) << endl;
    cout << "===============================================" << endl;
    cout << "Tinh tong n so lien tiep bang vong lap: " << TongLienTiep1(n) << endl;
    cout << "Tinh tong n so lien tiep bang de qui: " << TongLienTiep2(n) << endl;
    cout << "===============================================" << endl;
    cout << "Tinh tong so le lien tiep bang vong lap: " << TongLeLienTiep1(n) << endl;
    cout << "Tinh tong so le lien tiep bang de qui: " << TongLeLienTiep2(n) << endl;
    cout << "===============================================" << endl;
    cout << "Tinh tong so chan lien tiep bang vong lap: " << TongChanLienTiep1(n) << endl;
    cout << "Tinh tong so chan lien tiep bang de qui: " << TongChanLienTiep2(n) << endl;
    cout << "===============================================" << endl;
    cout << "Tinh tong so nguyen to lien tiep bang vong lap: " << TongSoNguyenTo1(n) << endl;
    cout << "Tinh tong so nguyen to lien tiep bang de qui: " << TongSoNguyenTo2(n) << endl;
    cout << "===============================================" << endl;
    cout << "Dem so nguyen to lien tiep bang vong lap: " << DemSoNguyenTo1(n) << endl;
    cout << "Dem so nguyen to lien tiep bang de qui: " << DemSoNguyenTo2(n) << endl;
    cout << "======================= Bai 2_2 ========================" << endl;
    cout << "Day "<< n << " so fibonanci dau tien : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << FiBoNanCi1(i) << "\t" ;
    }
    cout << endl;
    cout << "\nSo fibonaci tai vi tri (vong lap): " << n << " la: " << FiBoNanCi1(n) << endl;
    cout << "So fibonaci tai vi tri (de qui): " << n << " la: " << FiBoNanCi2(n) << endl;

    cout << "======================= Bai 2_3 ========================" << endl;
    // So vi khuan nhan len từ 3 vk ban đầu, ti lệ nhân là 2, sau 4 giờ
    cout << "Dem so vi khuan nhan len bang vong lap: " << SoViKhuanNhanLen1(3, 2, 4) << endl;
    cout << "Dem so vi khuan nhan len bang de qui: " << SoViKhuanNhanLen2(3, 2, 4) << endl;

    cout << "======================= Bai 2_4 ========================" << endl;
    // So tien sau khi gởi 1000$ với lãi suất 0.1% sau 3 năm 
    cout << "Tong so tien thu duoc (vong lap): " << TinhLaiKep1(1000, 0.1, 3) << endl;
    cout << "Tong so tien thu duoc (de qui): " << TinhLaiKep2(1000, 0.1, 3) << endl;
    cout << "======================= Bai 2_5 ========================" << endl;
    // Tình phần từ x trong mảng
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Vi tri cua phan tu 3 la: ( vi tri phan tu bat dau tu 0) " << ViTriPhanTu(arr, 5, 5) << endl;
    cout << "======================= Bai 2_6 ========================" << endl;
    char arr2[50];
    cout << "Nhap chuoi can kiem tra: " << endl;
    fflush(stdin);
    gets(arr2);
    cout << "Do dai chuoi vua nhap la: " << ChieuDaiChuoi(arr2, 0) << endl;
    return 0;
}