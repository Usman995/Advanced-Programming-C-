#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	const double x = 5694;
	double y;
	y = 1;
	double z =x/y;
	cout << z <<endl;
	while ( x/y != INFINITY)
	{
		y = y / 10;//keep dividing by y/10 till the next value of x/y would be INF
	}
	
	cout << "the floating point is : " << y << endl; //Print out the floating point.
	system("PAUSE");
	return 0;
}