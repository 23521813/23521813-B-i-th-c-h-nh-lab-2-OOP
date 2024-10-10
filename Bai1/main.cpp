#include "Diem.h"

int main() {
    Diem d1;                 // Sử dụng constructor không tham số
    Diem d2(3, 4);           // Sử dụng constructor có tham số
    Diem d3(d2);             // Sử dụng constructor sao chép

    // Xuất tọa độ các điểm
    d1.Xuat();               // Xuất điểm d1 (0, 0)
    d2.Xuat();               // Xuất điểm d2 (3, 4)
    d3.Xuat();               // Xuất điểm d3 (3, 4)

    // Sử dụng setter để thay đổi giá trị tọa độ
    d1.SetHoanhDo(2);
    d1.SetTungDo(3);
    d1.Xuat();               // Xuất điểm d1 sau khi thay đổi (2, 3)

    // Sử dụng phương thức tịnh tiến
    d2.TinhTien(1, 1);       // Dịch chuyển điểm d2 (+1, +1)
    d2.Xuat();               // Xuất điểm d2 sau khi tịnh tiến (4, 5)
    return 0;
}
