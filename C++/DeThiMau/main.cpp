#include <stdio.h>
#include "DeThiMau.h"
#include <iostream>

using namespace std;

int main(){
    char namefile[] = "INP.DAT";
    int sl;
    int arr[30];
    DocFileIPBai2(namefile, sl, arr);
    TimKiemSoAo(arr, sl, 1, sl);
    return 0;
}