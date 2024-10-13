#include "List.h"

// Constructor không tham số.
List::List() {}

// Thêm phần tử vào cuối danh sách
void List::add(double x) {
    data.push_back(x);
}

// Xóa phần tử đầu tiên có giá trị x
void List::remove_first(double x) {
    auto it = find(data.begin(), data.end(), x);
    if (it != data.end()) {
        data.erase(it);
    }
}

// Xóa tất cả các phần tử có giá trị x
void List::remove_all(double x) {
    data.erase(remove(data.begin(), data.end(), x), data.end());
}

// Thay thế phần tử thứ index bằng y
void List::replac(int index, double y) {
    if (index >= 0 && index < data.size()) {
        data[index] = y;
    }
}

// Xuất list dưới dạng [a,b,c,...]
void List::print_list() {
    cout << "[";
    for (size_t i = 0; i < data.size(); ++i) {
        cout << data[i];
        if (i < data.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}
