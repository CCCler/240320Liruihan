#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString)
{
    int length = strlen(hexString);
    int decimalValue = 0;
    for (int i = 0; i < length; i++)
    {
        char currentchar = hexString[i];
        int currentdigit;
        if (currentchar <= '9' && currentchar>='0')
        {
            currentdigit = static_cast<int>(currentchar);
        }
        else if(currentchar>='a'&&currentchar<='f')
        {
            currentdigit = currentchar - 'a' + 10;
        }
        else if (currentchar >= 'A' && currentchar <= 'F')
        {
            currentdigit = currentchar - 'A' + 10;
        }
        decimalValue += currentdigit * pow(16, length - 1 - i);
    }
    return decimalValue;
}
int main()
{
    char Hexstring[100];
    cout << "输入一串十六进制字符:";
    cin >>Hexstring ;
    int decimalvalue = parseHex(Hexstring);
    cout << "转换为十进制结果为: " << decimalvalue;
}