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
	cout << "������10��˫�������֣�һλС����";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	sort(arr, 10);
	cout << "���������Ϊ:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}