#include "ThiSinh.h"

// Nhập thông tin thí sinh
void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    cin.ignore();
    getline(cin >> ws, Ten);
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> iNgay >> iThang >> iNam;
    cout << "Nhap diem mon Toan: ";
    cin >> fToan;
    cout << "Nhap diem mon Van: ";
    cin >> fVan;
    cout << "Nhap diem mon Anh: ";
    cin >> fAnh;
}

// Xuất thông tin thí sinh
void ThiSinh::Xuat() {
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
    cout << "Diem Toan: " << fToan << endl;
    cout << "Diem Van: " << fVan << endl;
    cout << "Diem Anh: " << fAnh << endl;
    cout << "Tong diem: " << Tong() << endl;
}

// Phương thức tính tổng điểm ba môn
float ThiSinh::Tong() {
    return fToan + fVan + fAnh;
}
