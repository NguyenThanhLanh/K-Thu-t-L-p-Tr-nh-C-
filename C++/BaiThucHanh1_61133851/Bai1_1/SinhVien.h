struct SinhVien
{
    char idsv[10];
    char namesv[100];
    float dtb;
};

void NhapThongTinSV(SinhVien &sv);
void XuatThongTinSV(SinhVien sv);
void TimKiemSV(SinhVien a[], char idsv[], int n);
void SapXepDSSinhVien(SinhVien a[], int n, bool sapxep);
void NhapDSSV(SinhVien a[], int n);
void XuatDSSV(SinhVien a[], int n);

