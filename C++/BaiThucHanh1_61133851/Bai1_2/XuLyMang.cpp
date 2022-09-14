#include "XuLyMang.h"
#include <iostream>
#include <math.h>

using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap phan tu thu " << i + 1 << ": ";
        cin >> a[i];
    }
}
void XuatMang(int a[], int n)
{
    cout << "Danh sach phan tu trong mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
bool IsSoNguyenTo(int a)
{
    if(a < 2) return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void TimCacSoNguyenTo(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsSoNguyenTo(a[i]))
        {
            cout << a[i] << "\t";
        }
    }
}
bool IsSoChinhPhuong(int n)
{
    int i = 0;
    while (i * i <= n)
    {
        if (i * i == n)
        {
            return 1;
        }
        ++i;
    }
    return 0;
}
void TimSoChinhPhuong(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsSoChinhPhuong(a[i]))
        {
            cout << a[i] << "\t";
        }
    }
}
float TinhGTTrungBinh(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (float)sum / n;
}
void PhanTuLonHonGTTB(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > TinhGTTrungBinh(a, n))
        {
            cout << a[i] << "\t";
        }
    }
}
int PhanTuLonNhat(int a[], int n)
{
    // Phần tử lính canh
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void IsHamDaSXTangDan(int a[], int n)
{
    bool result = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            result = 0;
        }
    }
    if (result)
    {
        cout << "\nHam da xap xep tang dan!" << endl;
    }
    else
    {
        cout << "\nHam chua xap xep tang dan!" << endl;
    }
}
void SapXepTangDan(int a[], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void SapXepGiamDan(int a[], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}