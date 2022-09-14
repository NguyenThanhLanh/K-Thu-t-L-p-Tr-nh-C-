#include <stdio.h>
#include "DeThiMau.h"
#include <iostream>

using namespace std;

void DocFileIPBai2(char namefile[], int &count, int arrInt[])
{
    int i = 0;
    FILE *fileIP = fopen("INP.DAT", "rt");
    if (fileIP == NULL)
    {
        printf("Khong tim thay file!");
    }
    else
    {
        fscanf(fileIP, "%d\n", &count);
        while (!feof(fileIP))
        {
            fscanf(fileIP, "%d ", &arrInt[i]);
            i++;
        }
    }
    fclose(fileIP);
}
void TimKiemSoAo(int arrInt[], int n, int left, int right)
{
    if(left > right)
     return;
    int mid = (left + right )/2;
    if (mid==arrInt[mid-1])
    {
        printf("%d\t", arrInt[mid-1]);
    }
    TimKiemSoAo(arrInt, n, left, mid - 1);
    TimKiemSoAo(arrInt, n, mid+1, right);
}