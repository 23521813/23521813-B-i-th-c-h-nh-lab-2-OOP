#include "Diem.h"

int main() {
    Diem d;  // Khởi tạo đối tượng Diem

    cout << "Nhap toa do cua diem: " << endl;
    d.Nhap();

    // Nhập số lượng chỉ thị
    int n, x;
    cout << "Nhap so luong chi thi: ";
    cin >> n;

    // Xử lý n chỉ thị
    for (int i = 0; i < n; i++) {
        cout << "Nhap chi thi x: ";
        cin >> x;

        if (x == 1) {
            // Nhân đôi hoành độ và tung độ
            d.NhanDoi();
        } else if (x == 2) {
            // Đặt điểm về gốc tọa độ
            d.DatVeGoc();
        } else if (x == 3) {
            int k;
            float dTinhTien;
            cout << "Nhap huong tinh tien k (0 = theo truc x, k khac 0 = theo truc y): ";
            cin >> k;
            cout << "Nhap do tinh tien d: ";
            cin >> dTinhTien;
            d.TinhTien(k, dTinhTien);
        } else {
            // Không làm gì khi chi thi không hợp lệ
            cout << "Chi thi khong hop le. Khong lam gi." << endl;
        }
    }

    // Xuất thông tin điểm sau khi thực hiện các chỉ thị
    cout << "Toa do diem cuoi cung: ";
    d.Xuat();

    return 0;
}
