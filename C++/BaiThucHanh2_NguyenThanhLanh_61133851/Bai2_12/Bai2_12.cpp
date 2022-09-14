#include "BaiTap2_12.h"

int TongChuSo(int n){
    if (n < 10)
    {
        return n;
    }
    return (n%10) + TongChuSo(n/10);
}
