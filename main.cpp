﻿#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Nhập các hệ số a, b, c từ người dùng
    double a, b, c;
    cout << "Nhập hệ số a: ";
    cin >> a;
    cout << "Nhập hệ số b: ";
    cin >> b;
    cout << "Nhập hệ số c: ";
    cin >> c;

    // Tính delta
    double delta = b * b - 4 * a * c;

    // Kiểm tra giá trị của delta để xác định số nghiệm và tính nghiệm
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phương trình có hai nghiệm thực phân biệt:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }

}
