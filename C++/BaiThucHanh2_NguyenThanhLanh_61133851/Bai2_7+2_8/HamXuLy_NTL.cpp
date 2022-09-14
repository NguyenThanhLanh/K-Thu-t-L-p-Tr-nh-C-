#include <iostream>
#include "HamXuLy_NTL.h"

using namespace std;

int ToHop(int n, int k)
{
    if(k>n||k<0 || n < 0)
        return -1;
    if (k == 0 || k == n)
        return 1;
    if (k > n)
        return 0;
    return ToHop(n - 1, k) + ToHop(n - 1, k - 1);
}

void TamGiacPascal1(int n)
{
    for (int line = 1; line <= n; line++)
    {
        int item = 1;
        for (int space = 1; space < (n - line + 1); space++)
        {
            cout << " ";
        }
        for (int i = 1; i <= line; i++)
        {
            cout << item << " ";
            item = item * (line - i) / i;
        }
        cout << "\n";
    }
}
void TamGiacPascal2(int n){
    for (int line = 0; line < n; line++)
    {
        for (int space = 1; space < (n-line); space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= line; j++)
        {
            cout << ToHop(line, j) << " ";
        }
        cout << "\n";
    }
}
