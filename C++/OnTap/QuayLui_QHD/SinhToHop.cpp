#include <iostream>

using namespace std;

int n, X[100], K;

void inKQ(){
    for (int i = 1; i < n-1; i++)
    {
        cout << X[i];
    }
    cout << endl;
}

// X[i - 1] + 1 <= i <= N-K+i;
void Try(int i){
    //duyệt tất cả các trường hợp mà xi có thể nhận được
    for(int j = X[i-1] + 1 ; j <= (n-K+i); j++){
        X[i]=j;
        if(i==K){
            inKQ();
        }
        else{
            Try(i+1);
        }
    }
}

int main(){
    cin >> n >> K;
    X[0]=0;
    Try(1);
    return 0;
}