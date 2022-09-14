//Vi?t chuong trình gi?i quy?t câu 2 c?a b?n ? dây
#include<stdio.h>

void NhapMang(int arr[], int &n){
    do{
        printf("Nhap so luong phan tu mang: ");
        scanf("%d", &n);
    }
    while(n<=0);
    for(int i=0; i < n; i++){
        printf("Nhap gia tri phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void InMang(int arr[], int n){
    printf("\nDanh sach cac phan tu trong mang: \n");
    for(int i = 0; i<n; i++){
        printf("%5d", arr[i]);
    }
}

bool IsSNT(int n){
    if( n<2 )
        return 0;
    else{
        for(int i = 2; i<n;i++){
            if(n % i==0){
                return 0;
            }
        }
        return 1;
    }
}

int DemSNT(int arr[], int n){
    if(n>0){
        if( IsSNT(arr[n-1])){
            return  1 + DemSNT(arr, n-1); 
        }
        else{
            return DemSNT(arr, n-1);
        }
    }
    else{
        return 0;
    }
}

int TongChan(int arr[], int n){
    if(n<=0)
        return 0;
    if(arr[n-1] % 2 == 0)
        return arr[n-1] + TongChan(arr, n-1);
    else{
        return TongChan(arr, n-1);   
    }
}


int main()
{
    int n, arr[100];
    NhapMang(arr, n);
    InMang(arr, n);
    printf("So luong so nguyen to trong mang: %d", DemSNT(arr, n));
    printf("\nTong cac so chan: %d", TongChan(arr, n));
}
