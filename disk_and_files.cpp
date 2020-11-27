#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream FILE;
	FILE.open("26_demo.txt");
	int S, N, x, max = 0, count = 0, b, num;
	FILE >> S;
	FILE >> N;
	int* a = new int[N];
	for (int i = 0; i < N; i++)
	{
		FILE >> a[i];
	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (a[i] > a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (max + a[i] <= S)
		{
			max += a[i];
			count += 1;
			b = i;
		}
	}
	num = b;
	for (int i = b; i < N; i++)
	{
		if (S - (max - a[num] + a[i]) >= 0)
		{
			max = max - a[num] + a[i];
			num = i;
		}
	}
	cout << count << " " << a[num];
}