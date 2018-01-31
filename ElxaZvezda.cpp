#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;

int mainE()
{
	int i = 1, j;
	do
	{
		j = 1;
		do
		{
			cout << "*";
			j++;
		} while (j <= i);
		i++;
		cout << endl;
	} while (i <= 5);
	//getch();
	system("PAUSE");
	return 0;
}