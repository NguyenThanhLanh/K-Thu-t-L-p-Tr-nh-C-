#include "BaiTap2_11.h"
#include <iostream>

int ChuSoLonNhat(int n, int &max)
{
    int m;
    if (n == 0)
        return max;
    else
    {
        m = n % 10;
        if (m > max)
            max = m;
    }
    return ChuSoLonNhat(n / 10, max);
}
