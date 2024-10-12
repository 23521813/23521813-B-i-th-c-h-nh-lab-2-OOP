#include "Diem.h"

Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
};

Diem::Diem(float Hoanh, float Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
};

Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

void Diem::Xuat() {
    cout << "Toa do diem: (" << iHoanh << ", " << iTung << ")" << endl;
}

float Diem::GetTungDo() {
    return iTung;
}

float Diem::GetHoanhDo() {
    return iHoanh;
}

void Diem::SetTungDo(float Tung) {
    iTung = Tung;
}

void Diem::SetHoanhDo(float Hoanh) {
    iHoanh = Hoanh;
}

void Diem::TinhTien(float deltaX, float deltaY) {
    iHoanh += deltaX;
    iTung += deltaY;
}
