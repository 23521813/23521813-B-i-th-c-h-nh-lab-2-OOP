#include "TamGiac.h"

// Constructor không tham số
TamGiac::TamGiac() {}

// Constructor có tham số
TamGiac::TamGiac(Diem a, Diem b, Diem c) {
    A = a;
    B = b;
    C = c;
}

// Nhập các điểm của tam giác
void TamGiac::Nhap() {
    cout << "Nhap diem A: ";
    float x, y;
    cin >> x >> y;
    A.SetHoanhDo(x);
    A.SetTungDo(y);
    cout << "Nhap diem B: ";
    cin >> x >> y;
    B.SetHoanhDo(x);
    B.SetTungDo(y);
    cout << "Nhap diem C: ";
    cin >> x >> y;
    C.SetHoanhDo(x);
    C.SetTungDo(y);
}

// In ra các điểm của tam giác
void TamGiac::Xuat() {
    cout << "Toa do diem A: ";
    A.Xuat();
    cout << "Toa do diem B: ";
    B.Xuat();
    cout << "Toa do diem C: ";
    C.Xuat();
}

// Phương thức tịnh tiến tam giác
void TamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

// Phương thức phóng to tam giác
void TamGiac::PhongTo(float tyle) {
    A.SetHoanhDo(A.GetHoanhDo() * tyle);
    A.SetTungDo(A.GetTungDo() * tyle);
    B.SetHoanhDo(B.GetHoanhDo() * tyle);
    B.SetTungDo(B.GetTungDo() * tyle);
    C.SetHoanhDo(C.GetHoanhDo() * tyle);
    C.SetTungDo(C.GetTungDo() * tyle);
}

// Phương thức thu nhỏ tam giác
void TamGiac::ThuNho(float tyle) {
    PhongTo(1.0 / tyle);  // Thu nhỏ tương đương với phóng to với tỷ lệ nghịch
}

// Phương thức quay tam giác quanh gốc tọa độ
void TamGiac::Quay(float goc) {
    float rad = goc * M_PI / 180.0;  // Đổi độ sang radian
    float xA = A.GetHoanhDo(), yA = A.GetTungDo();
    float xB = B.GetHoanhDo(), yB = B.GetTungDo();
    float xC = C.GetHoanhDo(), yC = C.GetTungDo();
    A.SetHoanhDo(xA * cos(rad) - yA * sin(rad));
    A.SetTungDo(xA * sin(rad) + yA * cos(rad));
    B.SetHoanhDo(xB * cos(rad) - yB * sin(rad));
    B.SetTungDo(xB * sin(rad) + yB * cos(rad));
    C.SetHoanhDo(xC * cos(rad) - yC * sin(rad));
    C.SetTungDo(xC * sin(rad) + yC * cos(rad));
}
