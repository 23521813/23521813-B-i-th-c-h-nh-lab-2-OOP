#include "ThiSinh.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh: " << endl;
    cin >> n;

    vector<ThiSinh> dsThiSinh(n);  // Mảng chứa danh sách thí sinh

    // Nhập thông tin cho từng thí sinh
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin thi sinh thu " << i + 1 << ":" << endl;
        dsThiSinh[i].Nhap();
    }

    // In ra thông tin thí sinh có tổng điểm lớn hơn 15
    cout << "\nDanh sach thi sinh co tong diem lon hon 15:" << endl;
    for (int i = 0; i < n; i++) {
        if (dsThiSinh[i].Tong() > 15) {
            dsThiSinh[i].Xuat();
            cout << "--------------------------\n";
        }
    }

    // Tìm thí sinh có tổng điểm cao nhất
    int viTriMax = 0;
    for (int i = 1; i < n; i++) {
        if (dsThiSinh[i].Tong() > dsThiSinh[viTriMax].Tong()) {
            viTriMax = i;
        }
    }

    // In ra thí sinh có tổng điểm cao nhất
    cout << "\nThong tin thi sinh co tong diem cao nhat:" << endl;
    dsThiSinh[viTriMax].Xuat();

    return 0;
}
