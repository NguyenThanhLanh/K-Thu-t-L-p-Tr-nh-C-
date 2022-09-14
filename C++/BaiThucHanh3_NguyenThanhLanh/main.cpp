#include <stdio.h>
#include "BaiTapTH3.h"
int main(){
    char namefile[] = "Tiengthu_LuuTrongLu.txt" ;
    DocFileVanBan(namefile);
    // DocFileVanBanTiengViet(namefile); //Chưa được
    //Bai 2
    fflush(stdin);
    printf("\nBai tap 2\n");
    KichThuocTapTin();
    //Bai 3
    printf("\nBai tap 3\n");
    char namefile2[] = "Hesoptbac2.txt";
    GiaiPhuongTrinhBac2(namefile2);
    //Bai 4
    printf("\nBai tap 4\n");
    char namefile3[] = "HeSoPTB2s.txt";
    GiaiPhuongTrinhBac2s(namefile3);
    //Bai 5
    printf("\nBai tap 5\n");
    char namefile4[]="DSSV_bai5.txt";
    SinhVien ds[5];
    DocDSQLSV(namefile4, ds);
    //Bai 6
    printf("\nBai tap 6\n");
    char namefile5[]="MangSoNguyen_BT6.txt";
    XuLyFileDaySoNguyen(namefile5);
    return 0;
}