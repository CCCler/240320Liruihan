#include <cmath>
#include <iostream>
using namespace std;
void sort(double list[], int listsize) {
	bool changed;
	do {
		changed = false;
		for (int j = 0; j < listsize - 1; j++)
		{
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	int size;
	cout << "请输入数组的大小:";
	cin >> size;
	double* arr = new double[size];
	cout << "请输入" << size << "个元素"<<endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	cout << "\n数组地址 " << arr << endl;
	cout << "元素(用指针调用)"  ;
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
	sort(arr, size);
	cout << "\n排序后的元素(用指针调用)" << endl;
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	delete[] arr;
	return 0;

}