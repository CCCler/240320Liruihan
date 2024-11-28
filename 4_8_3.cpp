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
	cout << "����������Ĵ�С:";
	cin >> size;
	double* arr = new double[size];
	cout << "������" << size << "��Ԫ��"<<endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	cout << "\n�����ַ " << arr << endl;
	cout << "Ԫ��(��ָ�����)"  ;
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
	sort(arr, size);
	cout << "\n������Ԫ��(��ָ�����)" << endl;
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	delete[] arr;
	return 0;

}