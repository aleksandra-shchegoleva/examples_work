#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int M14, M7, M2, M, n, a;
	M14 = 0;
	M7 = 0;
	M2 = 0;
	M = 0;
	ifstream FILE;
	FILE.open("27-A_2.txt");
	FILE >> n;
	for (int i = 0; i < n; i++)
	{
		FILE >> a;
		if (a % 14 == 0 && a > M14)
		{
			if (M14 > M)
			{
				M = M14;
			}
			M14 = a;
		}
		else if (a % 7 == 0 && a % 2 != 0 && a > M7)
		{
			M7 = a;
		}
		else if (a % 2 == 0 && a % 7 != 0 && a > M2)
		{
			M2 = a;
		}
		else if (a % 14 != 0 && a > M)
		{
			M = a;
		}
	}
	if (M14 * M > M2 * M7)
	{
		cout << M14 * M << " ";
	}
	else
	{
		cout << M2 * M7 << " ";
	}
	M14 = 0;
	M7 = 0;
	M2 = 0;
	M = 0;
	ifstream FILE1;
	FILE1.open("27-B_2.txt");
	FILE1 >> n;
	for (int i = 0; i < n; i++)
	{
		FILE1 >> a;
		if (a % 14 == 0 && a > M14)
		{
			if (M14 > M)
			{
				M = M14;
			}
			M14 = a;
		}
		else if (a % 7 == 0 && a % 2 != 0 && a > M7)
		{
			M7 = a;
		}
		else if (a % 2 == 0 && a % 7 != 0 && a > M2)
		{
			M2 = a;
		}
		else if (a % 14 != 0 && a > M)
		{
			M = a;
		}
	}
	if (M14 * M > M2 * M7)
	{
		cout << M14 * M;
	}
	else
	{
		cout << M2 * M7;
	}
}