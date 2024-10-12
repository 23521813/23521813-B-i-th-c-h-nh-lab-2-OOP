#include <bits/stdc++.h>

using namespace std;

class ThiSinh {
private:
    string Ten;      // Tên thí sinh
    string MSSV;     // Mã số sinh viên
    int NgaySinh;       // Ngày sinh
    int ThangSinh;      // Tháng sinh
    int NamSinh;        // Năm sinh
    float DiemToan;     // Điểm môn Toán
    float DiemVan;      // Điểm môn Văn
    float DiemAnh;      // Điểm môn Anh

public:
    void Nhap();     // Phương thức nhập thông tin
    void Xuat();     // Phương thức xuất thông tin
    float Tong();    // Tính tổng điểm ba môn
};

