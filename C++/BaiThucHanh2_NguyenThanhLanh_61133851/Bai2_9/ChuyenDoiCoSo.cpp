#include <iostream>
#include "ChuyenDoiCoSo.h"

using namespace std;

void ChuyenDoiCoSo1(int n, int b)
{
    if (n < 0 || b < 2 || b > 16)
    {
        cout << "Co so hoac phep toan khong hop le! ";
        return;
    }
    char arr[20];
    int count = 0;
    int phandu;
    int phanconlai = n;
    while (phanconlai > 0)
    {
        if (b > 10)
        {
            phandu = phanconlai % b;
            if (phandu >= 10)
            {
                arr[count] = (char)(phandu + 55);
                // chuyen sang chuoi ky tu
                count++;
            }
            else
            {
                arr[count] = (char)(phandu + 48);
                // chuyen sang ky tu int --> char
                count++;
            }
        }
        else
        {
            arr[count] = (char)((phanconlai % b) + 48);
            count++;
        }
        phanconlai /= b;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
}
void ChuyenDoiCoSo2(int phanconlai, int b)
{
    int phandu = phanconlai % b;
    if (phanconlai == 0)
    {
        if (phandu >= 10)
        {
            cout << (char)(phandu + 55);
            return;
        }
        else
        {
            cout << (char)(phandu + 48);
            return;
        }
    }
    return ChuyenDoiCoSo2(phanconlai /= b, b);
}