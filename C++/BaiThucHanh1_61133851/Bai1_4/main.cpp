#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
    if(argc==4){
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        char pt = *argv[2];
        switch (pt)
        {
        case '+':
            cout << x << " " << pt << " " << y << " = " << x+y << endl;
            break;
        case '-':
            cout << x << " " << pt << " " << y << " = " << x-y << endl;
            break;
        case '*':
            cout << x << " " << pt << " " << y << " = " << x*y << endl;
            break;
        case '/':
            cout << x << " " << pt << " " << y << " = " << (float) x/y << endl;
            break;
        default:
            cout << "Phep toan khong hop le!" << endl;
            break;
        }
    }
    else{
        cout << "Nhap sai dinh dang!" << endl;
        cout << argc << endl;
    }
    return 0;
}