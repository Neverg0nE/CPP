#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, d4;
    cout << "请输入4位数字: ";
    cin >> num;

    // 分离各位数字
    d1 = num / 1000;          // 千位
    d2 = (num % 1000) / 100;  // 百位
    d3 = (num % 100) / 10;    // 十位
    d4 = num % 10;            // 个位

    // (a) 正序输出
    cout << "正序: " << d1 << "  " << d2 << "  " << d3 << "  " << d4 << endl;

    // (b) 逆序输出
    cout << "逆序: " << d4 << "  " << d3 << "  " << d2 << "  " << d1 << endl;

    return 0;
}

