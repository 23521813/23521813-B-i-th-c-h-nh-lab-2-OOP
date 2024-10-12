#include "DaGiac.h"

int main() {
    // Khởi tạo đối tượng đa giác
    DaGiac dg;
    // Nhập tọa độ các đỉnh của đa giác
    dg.Nhap();
    // Xuất tọa độ các đỉnh của đa giác
    dg.Xuat();
    // Tịnh tiến đa giác
    cout << "Tinh tien da giac (dx = 2, dy = 3):\n";
    dg.TinhTien(2, 3);
    dg.Xuat();
    // Phóng to đa giác
    cout << "Phong to da giac (ty le = 2):\n";
    dg.PhongTo(2);
    dg.Xuat();
    // Thu nhỏ đa giác
    cout << "Thu nho da giac (ty le = 0.5):\n";
    dg.ThuNho(2);
    dg.Xuat();
    // Quay đa giác
    cout << "Quay da giac 90 do:\n";
    dg.Quay(90);
    dg.Xuat();
    return 0;
}
