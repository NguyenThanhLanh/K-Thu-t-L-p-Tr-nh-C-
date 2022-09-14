#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <string.h>
#include <iostream>
#include <math.h>

struct SinhVien
{
    char IdSV[100];
    char NameSV[100];
    float DiemSV;
};

//Bai1
void DocFileVanBan(char fname[]);
void DocFileVanBanTiengViet(char fname[]);
//Bai2
void KichThuocTapTin();
//Bài 3
void GiaiPhuongTrinhBac2(char fname[]);
//Bai 4
void GiaiPhuongTrinhBac2s(char fname[]);
//Bai 5
void XuatDSSV(SinhVien dssv[], int n);
void SapXepDSSVTheoDiem(SinhVien dssv[], int n);
void DocDSQLSV(char fname[], SinhVien dssv[]);
//Bai 6
void SapXepMangSoNguyen(int arr[], int n);
void XuLyFileDaySoNguyen(char fname[]);
//Bai 7
void show(char *fname);
