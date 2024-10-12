#include "ThiSinh.h"

// Nhập thông tin thí sinh
void ThiSinh::Nhap() {
    cout << "Nhap ten thi sinh: ";
    cin.ignore();
    getline(cin >> ws, Ten);
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap ngay sinh (dd mm yyyy): ";
    cin >> NgaySinh >> ThangSinh >> NamSinh;
    cout << "Nhap diem mon Toan: ";
    cin >> DiemToan;
    cout << "Nhap diem mon Van: ";
    cin >> DiemVan;
    cout << "Nhap diem mon Anh: ";
    cin >> DiemAnh;
}

// Xuất thông tin thí sinh
void ThiSinh::Xuat() {
    cout << "Ten: " << Ten << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Ngay sinh: " << NgaySinh << "/" << ThangSinh << "/" << NamSinh << endl;
    cout << "Diem Toan: " << DiemToan << endl;
    cout << "Diem Van: " << DiemVan << endl;
    cout << "Diem Anh: " << DiemAnh << endl;
    cout << "Tong diem: " << Tong() << endl;
}

// Phương thức tính tổng điểm ba môn
float ThiSinh::Tong() {
    return DiemToan + DiemVan + DiemAnh;
}
