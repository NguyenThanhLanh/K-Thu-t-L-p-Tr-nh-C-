// Nguyễn Thành Lãnh 
//Số 1 là không dùng đệ qui
//Số 2 là dùng để qui để giải quyết bài toán
// arr là mảng, với n là số lượng phần tử trong mảng
#include<iostream>
#include "Bai2_10.h"
#include<math.h>

using namespace std;

int TinhTongPTMang1(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int TinhTongPTMang2(int arr[], int n){
    if (n==1)
    {
        return arr[0];
    }
    return arr[n-1] + TinhTongPTMang2(arr, n-1);
}

int TinhTongPTDuongMang1(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}
int TinhTongPTDuongMang2(int arr[], int n){
    if (n==1)
    {
        if (arr[0]>0)
        {
            return arr[0];
        }
        return 0;
    }
    if (arr[n-1] > 0)
    {
        return arr[n-1] + TinhTongPTDuongMang2(arr, n-1);
    }
    else
    {
        return TinhTongPTDuongMang2(arr, n-1);
    }
}

bool IsSNT(int n){
    if(n<2)
    return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i ==0)
        {
            return 0;
        }
    }
    return 1;
}
int DemSoLuongPTLaSNT1(int arr[], int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (IsSNT(arr[i]))
        {
            count++;
        }
    }
    return count;
}
int DemSoLuongPTLaSNT2(int arr[], int n){
    if (n==1)
    {
        if(IsSNT(arr[0]))
            return 1;
        else
            return 0;
    }
    if (IsSNT(arr[n-1]))
    {
        return 1 + DemSoLuongPTLaSNT2(arr, n-1);
    }
    
    return DemSoLuongPTLaSNT2(arr, n-1);
}

int PTLonNhatMang1(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]> max)
        max = arr[i];
    }
    return max;
}
int PTLonNhatMang2(int arr[], int n){
    if(n==1)
        return arr[0];
    if(arr[n-1] > PTLonNhatMang2(arr, n-1))
        return arr[n-1];
    else    
        return PTLonNhatMang2(arr, n-1);
}
