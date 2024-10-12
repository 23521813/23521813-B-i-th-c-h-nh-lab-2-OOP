#include <bits/stdc++.h>

using namespace std;

class ThiSinh {
private:
    string Ten;      // Tên thí sinh
    string MSSV;     // Mã số sinh viên
    int iNgay;       // Ngày sinh
    int iThang;      // Tháng sinh
    int iNam;        // Năm sinh
    float fToan;     // Điểm môn Toán
    float fVan;      // Điểm môn Văn
    float fAnh;      // Điểm môn Anh

public:
    void Nhap();     // Phương thức nhập thông tin
    void Xuat();     // Phương thức xuất thông tin
    float Tong();    // Tính tổng điểm ba môn
};

