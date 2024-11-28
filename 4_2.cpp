#include <iostream>
using namespace std;
void sort(double list[], int listsize) {
	bool changed;
	do {
		changed = false;
		for (int j = 0; j < listsize-1; j++) 
		{
			if (list[j] > list[j + 1]) {
				swap(list[j],list[j + 1]);
				changed = true;
			}
	}
}while (changed);
}
int main()
{
	double arr[10];
	cout << "请输入10个双精度数字（一位小数）";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	sort(arr, 10);
	cout << "排序后数字为:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}