#include <iostream>
#include <iomanip>

using namespace std;

int main4()
{
	cout << "a1= ";
	int a1;
	cin >> a1;
	if (!cin)
	{
		cout << "Error, Bad Input!\n";
		return 1;
	}
	cout << "a2= ";
	int a2;
	
		cin >> a2;
	if (!cin)
	{
		cout << "Error, Bad Input!\n";
		return 1;
	}
	cout << "a3= ";
	int a3;
	cin >> a3;
	if (!cin)
	{
		cout << "Error, Bad Input! \n";
		return 1;
	}
	cout << "a4= ";
	int a4;
	cin >> a4;
	if (!cin)
	{
		cout << "Error, Bad Input!\n";
		return 1;
	}
	cout << "a= ";
	int a;
	cin >> a;
	if (!cin)
	{
		cout << "Error, Bad Input!\n";
		return 1;
	}
	cout << "p= ";
	int p;
	cin >> p;
	if (!cin)
	{
		cout << "Error, Bad Input!\n";
		return 1;
	}
	cout << "q= ";
	int q;
	cin >> q;
	
		if (!cin)
		{
			cout << "Error, Bad Input!\n";
			return 1;
		}
	if (p >= q)
	{
		cout << "Error!\n";
		return 1;
	}
	for (int x1 = p; x1 <= q; x1++)
		for (int x2 = p; x2 <= q; x2++)
			for (int x3 = p; x3 <= q; x3++)
				for (int x4 = p; x4 <= q; x4++)
					if (a1*x1 + a2 * x2 + a3 * x3 + a4 * x4 == a)
						cout << setw(5) << x1 << setw(5) << x2
						<< setw(5) << x3 << setw(5) << x4 << "\n";
	return 0;
}
