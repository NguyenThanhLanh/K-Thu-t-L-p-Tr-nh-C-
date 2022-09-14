// (số 1: không dùng đệ quy, số 2: sử dụng đệ qui)
// Câu a - Tĩnh lũy thừa mũ n
float TinhLuyThua1(float a, int n);
float TinhLuyThua2(float a, int n);
// Câu b - Tính n giai thừa với n ≥ 0.
int TinhGiaiThua1(int n);
int TinhGiaiThua2(int n);
// Câu c - Tính tổng từ 1 đến n với n ≥ 0.
int TongLienTiep1(int n);
int TongLienTiep2(int n);
// câu d - Tính tổng lẻ từ 1 đến n với n ≥ 0.
int TongLeLienTiep1(int n);
int TongLeLienTiep2(int n);
// Câu e - Tính tổng chẵn từ 2 đến n với n ≥ 0.
int TongChanLienTiep1(int n);
int TongChanLienTiep2(int n);
// Câu f - Tính tổng các số nguyên tố từ 1 đến n (n là số nguyên dương);
bool IsSNT(int n);
int TongSoNguyenTo1(int n);
int TongSoNguyenTo2(int n);
// Câu g - Đếm số nguyên tố từ 1 đến n (n nguyên dương)
int DemSoNguyenTo1(int n);
int DemSoNguyenTo2(int n);

//========================BÀI 2_2=======================================
//Tính số fibonanci tai vi tri n
int FiBoNanCi1(int n);
int FiBoNanCi2(int n);
//========================BÀI 2_3=======================================
// Tính sô lượng vi khuẩn nhân lên từ n vi khuản ban đầu, ti lệ nhân lên là k, sau h giờ.
int SoViKhuanNhanLen1(int n, int k, int h);
int SoViKhuanNhanLen2(int n, int k, int h);
//========================BÀI 2_4=======================================
// Tính lãi kép từ m số tiền ban đầu, với lãi suất i, và sau n năm.
float TinhLaiKep1(int m, float i, int n );
float TinhLaiKep2(int m, float i, int n );
//========================BÀI 2_5=======================================
// hàm đệ quy tìm vị trí phần tử x trong dãy các số nguyên đã được sắp xếp thứ tự tăng dần
int ViTriPhanTu(int a[], int n, int x);
//========================BÀI 2_6=======================================
// hàm đệ quy xác định chiều dài chuỗi
int ChieuDaiChuoi(char arr[], int n = 0);