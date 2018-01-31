#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;
int main3()
{
	cout << setprecision(5) << setiosflags(ios::fixed);
	for (double x = 0; x <= 1; x = x + 0.1)
		cout << setw(10) << x << setw(10) << sin(x)
		<< setw(10) << cos(x) << "\n";
	return 0;

}