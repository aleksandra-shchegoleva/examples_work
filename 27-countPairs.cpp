#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int n26 = 0, n13 = 0, n2 = 0, k = 0, n, a;
	ifstream FILE;
	FILE.open("27989_A.txt");
	FILE >> n;
	for (int i = 1; i <= n; i++)
	{
		FILE >> a;

		if (a % 26 == 0)
		{
			n26++;
		}
		else if (a % 13 == 0 && a % 2 != 0)
		{
			n13++;
		}
		else if (a % 2 == 0 && a % 13 != 0)
		{
			n2++;
		}
	}
	k = ((n2 * n13) + (n26  * (n26 - 1) / 2) + (n26 * (n - n26)));
	cout << endl;
	n26 = 0, n13 = 0, n2 = 0, k = 0;

	ifstream FILE1;
	FILE1.open("27989_B.txt");
	FILE1 >> n;
	for (int i = 1; i <= n; i++)
	{
		FILE1 >> a;

		if (a % 26 == 0)
		{
			n26++;
		}
		else if (a % 13 == 0 && a % 2 != 0)
		{
			n13++;
		}
		else if (a % 2 == 0 && a % 13 != 0)
		{
			n2++;
		}
	}
	k = ((n2  * n13) + (n26*(n26 - 1) / 2) + (n26 * (n - n26)));

	cout << k;
}