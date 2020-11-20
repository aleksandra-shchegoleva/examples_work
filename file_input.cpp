#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream FILE;
	FILE.open("24_demo.txt");
	int k = 1, max = 0;
	string a;
	FILE >> a;
	for (int i = 0; i < a.length() - 1; i++)
	{
		if (a[i] != a[i + 1])
		{
			k++;
		}
		else if (k > max)
		{
			max = k;
			k = 1;
		}
		else
		{
			k = 1;
		}
	}
	cout << max;
}