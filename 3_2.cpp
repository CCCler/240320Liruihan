#include <iostream>
using namespace std;
bool is_prime(int m)
{
	if (m <= 1) return false;
	for (int i = 2; i * i < m; ++i)
	{
		if (m % i == 0) return false;
	}
	return true;
}
int main()
{
	int count = 0;
	int prime[200];
	int m = 2;
	while (count < 200)
	{
		if(is_prime(m))
		{
			prime[count] = m;
			count++;
		}
		m++;
	}
	for (int i = 0; i < 200; i++)
	{
		cout << prime[i] << "\t";
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
}