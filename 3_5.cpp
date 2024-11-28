#include <iostream>
using namespace std;

int peach(int day){

		if (day == 10)
		{
		return 1;
}
else {
		return 2 * (peach(day + 1)+1);
	}
}
int main()
{
	int total_peachs = peach(1);
	cout << "第一天一共摘了" << total_peachs << "个桃子" << endl;
}