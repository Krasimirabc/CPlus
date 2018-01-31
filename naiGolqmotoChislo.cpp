#include <iostream>
#include <math.h>

using namespace std;

int main2()
{
	cout << "n= ";
	int n;
	cin >> n;
	if (!cin)
	{
		cout << "Error, Bad input! \n";
		return 1;
	}
	if (n < 1)
	{
		cout << "Incorrect input! \n";
		return 1;
	}
	double max = cos(n + 1 / n);
	for (int i = 2; i <= n; i++)
	{
		double p = i * i*cos(n + i / n);
		if (p > max) max = p;
	}
	cout << "max= " << max << "\n";
	return 0;
}