#include<bits/stdc++.h>
#include "Diem.h"

using namespace std;

class DaGiac {
private:
    int n;                     // Số đỉnh của đa giác
    std::vector<Diem> Dinh;    // Vector chứa các đỉnh của đa giác

public:
    DaGiac();                  // Constructor không tham số
    DaGiac(int soDinh);        // Constructor có tham số
    void Nhap();               // Phương thức nhập
    void Xuat();               // Phương thức xuất
    void TinhTien(int dx, int dy);   // Phương thức tịnh tiến
    void PhongTo(float tyle);        // Phương thức phóng to
    void ThuNho(float tyle);         // Phương thức thu nhỏ
    void Quay(float goc);            // Phương thức quay
    float TinhDienTich();
};
