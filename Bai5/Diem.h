
#include<bits/stdc++.h>

using namespace std;

class Diem {
private:
    float iHoanh, iTung;
public:
    Diem();
    Diem(float iHoanh, float iTung);
    Diem(const Diem &x);
    void Nhap();
    void Xuat();
    float GetTungDo();
    float GetHoanhDo();
    void SetTungDo(float Tung);
    void SetHoanhDo(float Hoanh);
    void NhanDoi();
    void DatVeGoc();
    void TinhTien(int k, float d);
};
