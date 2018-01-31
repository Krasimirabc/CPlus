#include <iostream>

using namespace std;
int main1()
{
	cout << "n= ";
	int n;
	//int m = 5;
	cin >> n;
	if (!cin)
	{
		cout << "Error, Bad Input! \n";
		system("PAUSE");
		return 1;
	}
	if (n <= 0)
	{
		cout << "Incorrect Input! \n";
		system("PAUSE");
		return 1;
	}
	int fact = 1;
	for (int i = 1; i <= n; i++)
		fact = fact * i;
	cout << n << "! = " << fact << "\n";
	system("PAUSE");
	return 0;
}