#include "DaGiac.h"

int main() {
    // Tạo đối tượng Da giac và nhập tọa độ
    DaGiac dg;
    dg.Nhap();
    // Tính và xuất diện tích
    float area = dg.TinhDienTich();
    cout << "Dien tich cua da giac: " << area << endl;
    return 0;
}
