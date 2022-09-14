#include <iostream>

int main(){
    int n;
    int arr[10];
    FILE *fIP = fopen("Test.txt", "rt");
    FILE *fOP = fopen("aaa.txt", "wt");
    if(fIP != NULL){
        fscanf(fIP, "%d", &n);
        int i =0;
        while (!feof(fIP))
        {
            fscanf(fIP, "%d", &arr[i]);
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr[i]);
        }
        fprintf(fOP, "%d\n", n);
        for (int i = 0; i < n; i++)
        {
            fprintf(fOP, "%d ", arr[i]);
        }
    }
    else{
        printf("Khong doc duoc file!");
    }
    fclose(fIP);
    fclose(fOP);
}