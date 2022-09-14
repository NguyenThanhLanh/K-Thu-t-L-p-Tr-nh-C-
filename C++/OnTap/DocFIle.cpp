#include <iostream>
#include <fstream>

using namespace std;

int main(){
    FILE *fileIP = fopen("TiengThu_LuuTrongLu.txt", "rt");
    FILE *fileOP = fopen("TiengThu.txt", "wt");
    char n[100];
    char c;
    while (!feof(fileIP))
    {
        fscanf(fileIP,"%s", n);
        printf("%s", n);
    }
    

    fclose(fileOP);
    fclose(fileIP);
    return 0;
}