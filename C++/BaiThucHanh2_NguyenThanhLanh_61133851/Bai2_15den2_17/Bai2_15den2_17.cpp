#include "Bai2_15den2_17.h"
#include <iostream>

using namespace std;

int TongLienTiep(int n){
    if (n<=0)
    {
        return -1;
    }
    
    if (n==1)
    {
        return 1;
    }
    return n + TongLienTiep(n-1);
}

float TongBieuThuc2_15(int n){
    if (n==1)
    {
        return 1;
    }
    return (float) 1 / TongLienTiep(n) + TongBieuThuc2_15(n-1);
}

int TongBieuThuc2_16(int n){
    if (n==1)
    {
        return 1;
    }
    return TongLienTiep(n) + TongBieuThuc2_16(n-1);
}

void ThapHaNoi(int n, char a, char b, char c){
    if(n==1){
        cout << "\t" << a <<"---------" << c << endl;
        return;
    }
    ThapHaNoi(n-1, a, c, b);
    ThapHaNoi(1, a, b, c);
    ThapHaNoi(n-1, b, a, c);
}

