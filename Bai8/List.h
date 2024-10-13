#include<bits/stdc++.h>

using namespace std;

class List {
private:
    vector<double> data;  // Vector để quản lý mảng động
public:
    List();  // Constructor không tham số
    // Phương thức thêm phần tử vào cuối list
    void add(double x);
    // Phương thức xóa phần tử đầu tiên có giá trị x
    void remove_first(double x);
    // Phương thức xóa tất cả các phần tử có giá trị x
    void remove_all(double x);
    // Phương thức thay đổi phần tử thứ x bằng y (chỉ khi x hợp lệ)
    void replac(int index, double y);
    // Phương thức xuất list dưới dạng [a,b,c,...]
    void print_list();
};
