#include "List.h"
#include<bits/stdc++.h>

using namespace std;

int main() {
    List myList;  // Khởi tạo đối tượng list
    int n;
    while (true) {
        cin >> n;
        if (n == -1) {  // Kết thúc vòng lặp khi n = -1
            break;
        }
        if (n == 0) {  // Thêm phần tử vào list
            double x;
            cin >> x;
            myList.add(x);
        } else if (n == 1) {  // Xóa phần tử đầu tiên có giá trị x
            double x;
            cin >> x;
            myList.remove_first(x);
        } else if (n == 2) {  // Xóa tất cả phần tử có giá trị x
            double x;
            cin >> x;
            myList.remove_all(x);
        } else if (n == 3) {  // Thay đổi phần tử thứ x bằng y
            int x;
            double y;
            cin >> x >> y;
            myList.replac(x, y);
        }
    }
    // In ra list
    myList.print_list();
    return 0;
}


