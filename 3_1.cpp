#include <iostream>
using namespace std;

void qiu(int a, int b, int& gongyueshu, int& gongbeishu);

int main() {
    int m, n;
    cout << "������������Ȼ�� m �� n: ";
    cin >> m >> n;

    int gongyueshu, gongbeishu;
    qiu(m, n, gongyueshu, gongbeishu); 

    cout << "���Լ��: " << gongyueshu << endl;
    cout << "��С������: " << gongbeishu<< endl;

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
