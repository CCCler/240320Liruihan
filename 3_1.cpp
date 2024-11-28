#include <iostream>
using namespace std;

void qiu(int a, int b, int& gongyueshu, int& gongbeishu);

int main() {
    int m, n;
    cout << "请输入两个自然数 m 和 n: ";
    cin >> m >> n;

    int gongyueshu, gongbeishu;
    qiu(m, n, gongyueshu, gongbeishu); 

    cout << "最大公约数: " << gongyueshu << endl;
    cout << "最小公倍数: " << gongbeishu<< endl;

    return 0;
}

void qiu(int a, int b, int& gongyueshu, int& gongbeishu) {
    int x = a, y = b;
    while (y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }
    gongyueshu = x;
    gongbeishu = (a * b) / gongyueshu;
}
