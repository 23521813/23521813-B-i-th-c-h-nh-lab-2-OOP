#include "DaGiac.h"

// Constructor không tham số
DaGiac::DaGiac() {
    n = 0;
}

// Constructor có tham số
DaGiac::DaGiac(int soDinh) {
    n = soDinh;
    Dinh.resize(n);
}

// Nhập các đỉnh của đa giác
void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh.resize(n);

    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Nhap toa do dinh thu " << i + 1 << ": ";
        cin >> x >> y;
        Dinh[i].SetHoanhDo(x);
        Dinh[i].SetTungDo(y);
    }
}

// Xxuất tọa độ các đỉnh của đa giác
void DaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        cout << "Toa do dinh thu " << i + 1 << ": ";
        Dinh[i].Xuat();
    }
}

// Phương thức tịnh tiến đa giác
void DaGiac::TinhTien(int dx, int dy) {
    for (int i = 0; i < n; i++) {
        Dinh[i].TinhTien(dx, dy);
    }
}

// Phương thức phóng to đa giác
void DaGiac::PhongTo(float tyle) {
    for (int i = 0; i < n; i++) {
        Dinh[i].SetHoanhDo(Dinh[i].GetHoanhDo() * tyle);
        Dinh[i].SetTungDo(Dinh[i].GetTungDo() * tyle);
    }
}

// Phương thức thu nhỏ đa giác
void DaGiac::ThuNho(float tyle) {
    PhongTo(1.0 / tyle);  // Thu nhỏ tương đương với phóng to với tỷ lệ nghịch
}

// Phương thức quay đa giác quanh gốc tọa độ
void DaGiac::Quay(float goc) {
    float rad = goc * M_PI / 180.0;  // Đổi từ độ sang radian
    for (int i = 0; i < n; i++) {
        int x = Dinh[i].GetHoanhDo();
        int y = Dinh[i].GetTungDo();
        // Công thức quay điểm quanh gốc tọa độ
        int xMoi = x * cos(rad) - y * sin(rad);
        int yMoi = x * sin(rad) + y * cos(rad);
        Dinh[i].SetHoanhDo(xMoi);
        Dinh[i].SetTungDo(yMoi);
    }
}

// Tính diện tích
float  DaGiac::TinhDienTich() {
    float area = 0.0;

    // Áp dụng công thức Shoelace
    for (int i = 0; i < n; i++) {
        area += (Dinh[i].iHoanh * Dinh[(i + 1) % n].iTung) - (Dinh[i].iTung * Dinh[(i + 1) % n].iHoanh);
    }

    return fabs(area) / 2.0; // Diện tích phải là số dương
}
