#include "BaiTapTH3.h"

void DocFileVanBan(char fname[])
{
    FILE *file = fopen(fname, "rt");
    if (file == NULL)
    {
        printf("Khong doc duoc file!");
    }
    else
    {
        while (!feof(file))
        {
            printf("%c", fgetc(file));
        }
    }
    fclose(file);
}
void show(char *fname)
{
    FILE *file = fopen(fname, "rt");
    if (file == NULL)
    {
        printf("Khong doc duoc file!");
    }
    else
    {
        while (!feof(file))
        {
            printf("%c", fgetc(file));
        }
    }
    fclose(file);
}
void DocFileVanBanTiengViet(char fname[])
{
    _setmode(_fileno(stdout), _O_U16TEXT); // for output
    _setmode(_fileno(stdin), _O_U16TEXT);  // for input
    FILE *file = _wfopen(L"TiengThu.txt", L"rt");
    if (file == NULL)
    {
        wprintf(L"Không đọc được file %s !", fname);
    }
    else
    {
        wchar_t strr[500];
        wprintf(L"\nĐọc file tiếng việt: \n");
        while (!feof(file))
        {
            wprintf(L"%lc", fgetwc(file));
        }
    }
    fclose(file);
}
//=========================================================
void KichThuocTapTin()
{
    char namefile[200];
    printf("Nhap vao ten file (hoac duong dan file): ");
    gets(namefile);
    fflush(stdin);
    FILE *file = fopen(namefile, "rt");
    fseek(file, 0, 2);
    printf("Kich thuoc tap tin \"%s\" la %d Bytes.", namefile, ftell(file));
    fclose(file);
}

//======================================================
void GiaiPhuongTrinhBac2(char fname[])
{
    FILE *file = fopen(fname, "rt");
    FILE *fileOP = fopen("KQPTB2_B3.txt", "wt");
    if (file == NULL)
    {
        fprintf(fileOP, "Khong doc duoc file!");
    }
    else
    {
        int a, b, c;
        float x1, x2, delta;
        fscanf(file, "%d%d%d", &a, &b, &c);
        printf("Giai phuong trinh: %dx^2 + %dx + %d = 0", a, b, c);
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                {
                    fprintf(fileOP, "Phuong trinh vo so nghiem!");
                }
                else
                {
                    fprintf(fileOP, "Phuong trinh vo nghiem!");
                }
            }
            else
            {
                fprintf(fileOP, "Phuong trinh co nghiem: %.2f", (float)-c / b);
            }
        }
        else
        {
            delta = b * b - 4 * a * c;
            if (delta < 0)
            {
                fprintf(fileOP, "Phuong trinh vo nghiem!");
            }
            else if (delta == 0)
            {
                fprintf(fileOP, "Phuong trinh co nghiem kep: x1 = x2 = %.2f", (float)-b / (2 * a));
            }
            else
            {
                delta = sqrt(delta);
                fprintf(fileOP, "Phuong trinh co hai nghiem: ");
                fprintf(fileOP, "x1 = %.2f", (float)((-b + delta) / (2 * a)));
                fprintf(fileOP, "\tx2 = %.2f", (float)((-b - delta) / (2 * a)));
            }
        }
    }
    fclose(fileOP);
    fclose(file);
}
// bai 4
void GiaiPhuongTrinhBac2s(char fname[])
{
    FILE *file = fopen(fname, "rt");
    FILE *fileOP = fopen("KQPTB2_B4.txt", "wt");
    if (file == NULL)
    {
        fprintf(fileOP, "Khong doc duoc file!");
    }
    else
    {
        float a, b, c, delta;
        while (!feof(file))
        {
            fscanf(file, "%f%f%f", &a, &b, &c);
            fprintf(fileOP, "\nPhuong trinh: %3.2fx^2 + %3.2fx + %3.2f = 0 \t", a, b, c);
            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                    {
                        fprintf(fileOP, "Phuong trinh vo so nghiem!");
                    }
                    else
                    {
                        fprintf(fileOP, "Phuong trinh vo nghiem!");
                    }
                }
                else
                {
                    fprintf(fileOP, "Phuong trinh co nghiem: %.2f", (float)-c / b);
                }
            }
            else
            {
                delta = b * b - 4 * a * c;
                if (delta < 0)
                {
                    fprintf(fileOP, "Phuong trinh vo nghiem!");
                }
                else if (delta == 0)
                {
                    fprintf(fileOP, "Phuong trinh co nghiem kep: x1 = x2 = %.2f", (float)-b / (2 * a));
                }
                else
                {
                    delta = sqrt(delta);
                    fprintf(fileOP, "Phuong trinh co hai nghiem: ");
                    fprintf(fileOP, "x1 = %.2f", (float)((-b + delta) / (2 * a)));
                    fprintf(fileOP, "\tx2 = %.2f", (float)((-b - delta) / (2 * a)));
                }
            }
        }
    }
    fclose(fileOP);
    fclose(file);
}

// Bai 5
void XuatDSSV(SinhVien dssv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nSinh vien thu %d: %s, %s, %.2f", i + 1, dssv[i].IdSV, dssv[i].NameSV, dssv[i].DiemSV);
    }
}

void SapXepDSSVTheoDiem(SinhVien dssv[], int n)
{
    SinhVien tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dssv[i].DiemSV < dssv[j].DiemSV)
            {
                tmp = dssv[i];
                dssv[i] = dssv[j];
                dssv[j] = tmp;
            }
        }
    }
}

void DocDSQLSV(char fname[], SinhVien dssv[])
{
    FILE *fileIP = fopen(fname, "rt");
    int stt = 0;
    if (fileIP != NULL)
    {
        while (!feof(fileIP))
        {
            fscanf(fileIP, "%[^,], %[^,],%f\n", &dssv[stt].IdSV, &dssv[stt].NameSV, &dssv[stt].DiemSV);
            stt++;
        }
        SapXepDSSVTheoDiem(dssv, stt);
        XuatDSSV(dssv, stt);
    }
    else
    {
        printf("Khong doc duoc file! ");
    }
}

// Bai 6
void SapXepMangSoNguyen(int arr[], int n)
{
    int tmp;
    for (int i = 0; i < n ; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
void XuLyFileDaySoNguyen(char fname[])
{
    FILE *file = fopen(fname, "rt");
    FILE *fileOP = fopen("KQXuLyMang_BT6.txt", "wt");
    if (file == NULL)
    {
        printf("Khong doc duoc file!");
        fprintf(fileOP, "Khong doc duoc file!");
    }
    else
    {
        int n, arr[100], count = 0;
        fscanf(file, "%d", &n);
        while (!feof(file))
        {
            fscanf(file, "%d", &arr[count]);
            count++;
        }
        SapXepMangSoNguyen(arr, count);
        fprintf(fileOP, "%d\n", n);
        while (count >= 1)
        {
            fprintf(fileOP, "%d ", arr[count-1]);
            --count;
        }
    }
    fclose(fileOP);
    fclose(file);
}