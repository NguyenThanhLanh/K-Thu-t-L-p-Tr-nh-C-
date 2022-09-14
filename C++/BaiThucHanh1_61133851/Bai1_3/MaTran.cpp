#include <iostream>
#include "MaTran.h"
#include <math.h>

using namespace std;

void NhapMaTran(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap phan tu a[" << i+1 << "]"
                 << "[" << j+1 << "] : ";
            cin >> arr[i][j];
        }
    }
}
void XuatMaTran(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}
int TongMaTran(int arr[][100], int m, int n)
{
    int sum=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
void TrungBinhCongMT(int arr[][100], int m, int n)
{
    cout << "Tong " << TongMaTran(arr, m, n) << endl;
    cout << "Trung binh cong ma tran: " << (float)TongMaTran(arr, m, n) / (m * n);
}
void PhanTuLonNhatMT(int arr[][100], int m, int n)
{
    int max = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << "Phan tu lon nhat Ma tran: " << max << endl;
}
void PhanTuLonNhatDongIMT(int arr[][100], int m, int n, int i)
{
    int max = arr[i-1][0];
    if (i-1 > m - 1 || i-1 < 0)
    {
        cout << "So dong khong hop le! " << endl;
    }
    else
    {
        for (int j = 0; j < m; j++)
        {
            if(max < arr[i-1][j]){
                max = arr[i-1][j];
            }
        }
    }
    cout << "Phan tu lon nhat dong " << i << " la: " << max << endl;
}
void PhanTuLonNhatCotJMT(int arr[][100], int m, int n, int i)
{
    int max = arr[0][i-1];
    if (i-1 > n - 1 || i-1 < 0)
    {
        cout << "So cot khong hop le! " << endl;
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if(max < arr[j][i-1]){
                max = arr[j][i-1];
            }
        }
    }
    cout << "Phan tu lon nhat cot " << i << " la: " << max << endl;
}
bool IsSoNguyenTo(int a)
{
    int count = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void DemSoNguyenToTrongMT(int arr[][100], int m, int n)
{
    int count = 0;
    cout << "\nDanh sach cac so nguyen to: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (IsSoNguyenTo(arr[i][j]))
            {
                cout << arr[i][j] << "\t";
                count ++;
            }
        }
    }
    cout << "\nSo so nguyen to trong ma tran: " << count << endl;
}
void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void SapXepMaTran(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i][j]>arr[i][k]){
                    swap(arr[i][j], arr[i][k]);
                }
            }
        }
    }
}