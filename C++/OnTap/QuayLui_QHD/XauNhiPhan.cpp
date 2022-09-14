#include <iostream>

using namespace std;
int n, X[100];

void inKQ(){
    for (int i = 0; i < n; i++)
    {
        cout << X[i];
    }
    cout << endl;
}

void Try(int i){
    for (int j = 0; j <= 1; j++)
    {
        X[i]=j;
        if(i==n){
            inKQ();
        }
        else{
            Try(i+1);
        }
    }
}


int main(){
    cout << "Nhap gia tri n: ";
    cin >> n;
    Try(1);
    return 0;
}