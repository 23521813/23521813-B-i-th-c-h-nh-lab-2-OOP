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

void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> iHoanh;
    cout << "Nhap tung do: ";
    cin >> iTung;
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

void Diem::NhanDoi() {
    iTung *= 2;
    iHoanh *= 2;
}

void Diem::DatVeGoc() {
    iHoanh = 0;
    iTung = 0;
}

void Diem::TinhTien(int k, float d) {
    if (k == 0) {
        // Tịnh tiến theo trục x
        iHoanh += d;
    } else {
        // Tịnh tiến theo trục y
        iTung += d;
    }
}
