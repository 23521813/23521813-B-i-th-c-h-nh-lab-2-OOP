#include "TamGiac.h"

int main() {
    TamGiac tg;

    tg.Nhap();
    tg.Xuat();

    cout << "Tinh tien tam giac (dx = 2, dy = 3):\n";
    tg.TinhTien(2, 3);
    tg.Xuat();

    cout << "Phong to tam giac (ty le = 2):\n";
    tg.PhongTo(2);
    tg.Xuat();

    cout << "Thu nho tam giac (ty le = 0.5):\n";
    tg.ThuNho(2);
    tg.Xuat();

    cout << "Quay tam giac 90 do:\n";
    tg.Quay(90);
    tg.Xuat();

    return 0;
}
