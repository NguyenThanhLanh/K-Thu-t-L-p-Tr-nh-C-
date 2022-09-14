#include <iostream>
#include "Bai2_15den2_17.h"

using namespace std;

int main(){
    int n = 3;
    cout << "Tong bieu thuc 2_15 voi n = " << n << ": "<< TongBieuThuc2_15(n) << endl;
    cout << "Tong bieu thuc 2_16 voi n = " << n << ": "<< TongBieuThuc2_16(n) << endl;
    cout << "Thap Ha Noi voi n = " << n << ": "<<endl;
    ThapHaNoi(n, 'A', 'B', 'C');
    return 0;
}