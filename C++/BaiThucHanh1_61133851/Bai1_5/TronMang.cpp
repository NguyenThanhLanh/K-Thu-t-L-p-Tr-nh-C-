#include <iostream>
#include "TronMang.h"

using namespace std;

void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
void Swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void SapXepMangTangDan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}
void TronMang(int a[], int b[], int c[], int na, int nb)
{
    int i = 0, j = 0, k = 0;
    while (i < na || j < nb)
    {
        if (i < na && j < nb)
        {
            if (a[i] <= b[j])
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = b[j];
                k++;
                j++;
            }
        }
        else
        {
            if (i < na && j >= nb)
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                if (i >= na && j < nb)
                {
                    c[k] = b[j];
                    k++;
                    j++;
                }
            }
        }
    }
    XuatMang(c, k);
}