#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	double fah2 = 120.0;
	cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
	for (double cel = 40.0; cel >= 31.0; cel-=1.0,fah2-=10.0)
	{
		double fah = celsius_to_fah(cel);
		double cel2 = fahrenheit_to_cels(fah2);
		cout << fixed << setprecision(1) << cel << "\t\t" << fah << "\t\t" << "|" <<"\t" << fah2  << fixed << setprecision(2) << "\t\t" << cel2 << endl;;
	}
}