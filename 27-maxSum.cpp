#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int minR, sum, n, a, b;
	minR = 9999999;
	sum = 0;
	ifstream FILE;
	FILE.open("27-A_demo.txt");
	FILE >> n;
	for (int i = 0; i < n; i++)
	{
		FILE >> a;
		FILE >> b;
		if (a > b)
		{
			sum += a;
			if (a - b < minR && (a - b) % 3 != 0)
			{
				minR = a - b;
			}
		}
		else
		{
			sum += b;
			if (b - a < minR && (b - a) % 3 != 0)
			{
				minR = b - a;
			}
		}
	}
	if (sum % 3 == 0)
	{
		sum -= minR;
	}
	cout << sum;
	minR = 9999999;
	sum = 0;
	ifstream FILE1;
	FILE1.open("27-B_demo.txt");
	FILE1 >> n;
	for (int i = 0; i < n; i++)
	{
		FILE1 >> a;
		FILE1 >> b;
		if (a > b)
		{
			sum += a;
			if (a - b < minR && (a - b) % 3 != 0)
			{
				minR = a - b;
			}
		}
		else
		{
			sum += b;
			if (b - a < minR && (b - a) % 3 != 0)
			{
				minR = b - a;
			}
		}
	}
	if (sum % 3 == 0)
	{
		sum -= minR;
	}
	cout << " " << sum;
}