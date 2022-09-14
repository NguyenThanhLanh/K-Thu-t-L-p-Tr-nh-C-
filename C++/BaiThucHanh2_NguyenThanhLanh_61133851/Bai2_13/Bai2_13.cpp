#include "Bai2_13.h"
#include <iostream>

using namespace std;

void SoDaoNguoc(int n){
    if(n < 10)
        cout << n ;
    else    
        {
            cout << n%10;
            SoDaoNguoc(n/10);
        }
}
