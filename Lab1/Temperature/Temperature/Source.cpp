#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	double farenheit, celcius;
	cout << "Enter farenheit:";
	cin >>  farenheit;
	celcius = double (5) / 9 * (farenheit - 32);
	cout << "Celcius = " <<  celcius<< endl;

	
	system("PAUSE");
	return 0;
}