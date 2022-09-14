#include <iostream>

using namespace std;

int n = 12, arrInt[] = {5, 7, 10, 9, 2, 12, 15}, x[100];
bool used[] = {0, 0, 0, 0, 0, 0, 0};

void inKQ()
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}

void Try(int i, int sum = 0)
{
    for (int j = 0; j < 7; j++)
    {
        if (used[j] == 0)
        {
            used[j] = 1;
            x[j] = arrInt[j];
            sum += arrInt[j];
            if (sum == n)
            {
                inKQ();
            }
            else
            {
                Try(i + 1, sum);
            }
            used[j] = 0;
        }
    }
}

int main()
{
}

// #include <stdio.h>
// int w = 21;
// int a[] = {5, 7, 10, 9, 2, 12, 15,4}, n = 8;
// int c[8];

// int kiemtra()
// {
// 	int s =0;
// 	for(int i=0;i<n;i++)
// 		if( c[i] == 1) s += a[i];
// 	if(s == w){
// 		for(int i=0;i<n;i++)
// 			if( c[i] == 1) printf("%d ",a[i]);
// 		printf("\n");
// 	}

// }

// void xuat()
// {
// 	for(int i=0;i<n;i++)
// 		printf("%d ",a[i]);
// 		printf("\n");
// }

// void sinh(int i)
// {

// 	for(int j=0;j<=1;j++)
// 		{
// 			c[i]=j;
// 			if(i==n-1) kiemtra();
// 			else
// 				sinh(i+1);
// 		}
// }

// int main()
// {
// 	sinh(0);

// }