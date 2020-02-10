#include <iostream>
using namespace std;

int main(int argc, char **argv)//changed from static void Main(string[] args)
{
	int factorialNumber = 5;
	int factorialTotal = 1;
	for (int n = 2; n<= factorialNumber; ++n)// for loop remains the same
	{
		factorialTotal *= n;
	}
	cout << factorialTotal << endl; //changed from System.Console.WriteLine(factorialTotal);
	system("pause");
}