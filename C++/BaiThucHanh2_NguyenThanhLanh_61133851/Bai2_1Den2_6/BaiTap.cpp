#include <iostream>
#include "BaiTap.h"
#include <math.h>

using namespace std;
// Tính lũy thừa
float TinhLuyThua1(float a, int n)
{
    float luythua = 1;
    if (a == 0)
        return 0;
    if (n == 0)
        return luythua;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            luythua *= (float)a;
        }
        return luythua;
    }
    else
    {
        for (int i = 1; i <= abs(n); i++)
        {
            luythua *= a;
        }
        return (float)1 / luythua;
    }
}
float TinhLuyThua2(float a, int n)
{
    if (a == 0)
        return 0;
    if (n == 0)
        return 1;
    if (n > 0)
    {
        return a * TinhLuyThua2(a, n - 1);
    }
    return (float)1 / a * TinhLuyThua2(a, n + 1);
}
// ==========================================================================
// Tính n!
int TinhGiaiThua1(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int TinhGiaiThua2(int n)
{
    if (n == 0)
        return 1;
    return n * TinhGiaiThua2(n - 1);
}
// ==============================================================================
// Tính tổng liên tiếp từ 0 đến n
int TongLienTiep1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int TongLienTiep2(int n)
{
    if (n == 1)
        return 1;
    return n + TongLienTiep2(n - 1);
}
// ==============================================================================
// Tính tổng các số lẻ liên tiếp từ 0 đến n
int TongLeLienTiep1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            sum += i;
        }
    }
    return sum;
}
int TongLeLienTiep2(int n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return TongLeLienTiep2(n - 1);
    return n + TongLeLienTiep2(n - 2);
}
// ==============================================================================
// Tính tổng các số chẵn liên tiếp từ 0 đến n
int TongChanLienTiep1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int TongChanLienTiep2(int n)
{
    if (n == 0)
        return 0;
    if (n % 2 == 1)
        return TongChanLienTiep2(n - 1);
    return n + TongChanLienTiep2(n - 2);
}
// ==============================================================================
// Tinh tong so nguyen to tu 0 den n

bool IsSNT(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int TongSoNguyenTo1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (IsSNT(i))
            sum += i;
    }
    return sum;
}
int TongSoNguyenTo2(int n)
{
    if (n == 1)
        return 1;
    if (IsSNT(n))
        return n + TongSoNguyenTo2(n - 1);
    else
        return TongSoNguyenTo2(n - 1);
}
// ==============================================================================
// Dem so nguyen to tu 0 den n
int DemSoNguyenTo1(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (IsSNT(i))
            count++;
    }
    return count;
}
int DemSoNguyenTo2(int n)
{
    if (n == 1)
        return 1;
    if (IsSNT(n))
        return 1 + DemSoNguyenTo2(n - 1);
    else
        return DemSoNguyenTo2(n - 1);
}
// ===================================Bai 2_2===========================================
// Tính so fibonaci tai vi tri n
// n là vị trí bắt đầu từ 1
int FiBoNanCi1(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 0;
    int i;
    if (n <= 0)
    {
        return -1;
    }
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    else
    {
        for (i = 2; i <= n; i++)
        {

            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
int FiBoNanCi2(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return FiBoNanCi2(n - 2) + FiBoNanCi2(n - 1);
}
// ===================================Bai 2_3===========================================
// Tính sô lượng vi khuẩn nhân lên từ n vi khuản ban đầu, ti lệ nhân lên là k, sau h giờ.
int SoViKhuanNhanLen1(int n, int k, int h)
{
    int result = n;
    for (int i = 1; i <= h; i++)
    {
        result *= k;
    }
    return result;
}
int SoViKhuanNhanLen2(int n, int k, int h)
{
    if (h == 1)
    {
        return n * k;
    }
    return SoViKhuanNhanLen2(n * k, k, h - 1);
}
// ===================================Bai 2_4===========================================
// Tính lãi kép từ m số tiền ban đầu, với lãi suất i, và sau n năm.
float TinhLaiKep1(int m, float i, int n)
{
    float sum = m;
    for (int j = 1; j <= n; j++)
    {
        sum = sum + sum * i;
    }
    return sum;
}
float TinhLaiKep2(int m, float i, int n)
{
    if (n == 1)
    {
        return m + m * i;
    }
    return TinhLaiKep2(m * i + m, i, n - 1);
}
// ===================================Bai 2_5===========================================
// hàm đệ quy tìm vị trí phần tử x trong dãy các số nguyên đã được sắp xếp thứ tự tăng dần
int ViTriPhanTu(int a[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    if (a[n - 1] == x)
    {
        return n - 1;
    }
    else
    {
        return ViTriPhanTu(a, n - 1, x);
    }
}
//========================BÀI 2_6=======================================
// hàm đệ quy xác định chiều dài chuỗi ( mảng arr, n là vị trí bắt đầu đếm)
int ChieuDaiChuoi(char arr[], int n)
{
    if (arr[n] == '\0')
        return 0;
    return 1 + ChieuDaiChuoi(arr, n + 1);
}
