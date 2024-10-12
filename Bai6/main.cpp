#include "Diem.h"

int main() {
    Diem d1, d2, d3;  // Khai báo 3 điểm tam giác
    float angle, distance;

    // Nhập tọa độ cho 3 điểm
    cout << "Nhap toa do 3 diem (x1, y1, x2, y2, x3, y3): " << endl;
    d1.Nhap();
    d2.Nhap();
    d3.Nhap();

    // Nhập hướng tịnh tiến và độ dài tịnh tiến
    cout << "Nhap huong tinh tien (goc - do) va do dai tinh tien: ";
    cin >> angle >> distance;

    // Tịnh tiến 3 điểm
    d1.TinhTien(angle, distance);
    d2.TinhTien(angle, distance);
    d3.TinhTien(angle, distance);

    // Xuất tọa độ sau khi tịnh tiến
    cout << "Toa do 3 diem sau khi tinh tien:" << endl;
    d1.Xuat();
    d2.Xuat();
    d3.Xuat();

    return 0;
}
