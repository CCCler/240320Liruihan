#include <iostream>
using namespace std;
int main()
{
	int numbers[10];
	int unique[10] = { 0 };
	int unique_count = 0;
	cout << "请输入10个整数" <<endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
		bool is_new = true;
		for (int j = 0; j < unique_count; j++)
		{
			if (numbers[i] == unique[j]) 
			{
				is_new = false;
				break;
			}
		}
		if (is_new) {
			unique[unique_count] = numbers[i];
			unique_count++;
		}
	}
	cout << "不同的数是" << endl;
	for(int i=0;i<unique_count;i++)
	{
	cout<<unique[i]<<" ";
	}
}