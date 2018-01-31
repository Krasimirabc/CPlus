#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

int main()
{  
	cout << "Enter n :";
	int n;
	cin >> n;
	cout << "you entered: " << n;
	cout << endl;

	int i = 1, j;
	while (i <= 5)
	{
		j = 1;
		while (j <= i)
		{
			cout << j;
			j++;
		}
		cout << endl;
		i++;
	}
	system("PAUSE");
	return 0;
}