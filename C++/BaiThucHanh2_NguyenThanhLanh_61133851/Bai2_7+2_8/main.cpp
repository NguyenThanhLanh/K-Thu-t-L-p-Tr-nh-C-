#include <iostream>
#include "HamXuLy_NTL.h"

using namespace std;

int main(){
    cout << "To hop chap 4 cua 9 la: " << ToHop(9, 4) << endl;
    cout << "Nhap chieu cao cua tam giac pascal: ";
    int h;
    cin >> h;
    cout << "Tam giac pascal duoc tao ra tu vong lap thuong: " << endl;
    TamGiacPascal1(h);
    cout << "Tam giac pascal duoc tao ra tu de qui: " << endl;
    TamGiacPascal2(h);
    return 0;
}