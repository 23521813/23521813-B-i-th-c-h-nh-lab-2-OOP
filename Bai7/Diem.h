#include<bits/stdc++.h>

using namespace std;

class Diem {
private:
    float iHoanh, iTung;
public:
    friend class DaGiac;
    Diem();
    Diem(float iHoanh, float iTung);
    Diem(const Diem &x);
    void Xuat();
    float GetTungDo();
    float GetHoanhDo();
    void SetTungDo(float Tung);
    void SetHoanhDo(float Hoanh);
    void TinhTien(float deltaX, float deltaY);
};
