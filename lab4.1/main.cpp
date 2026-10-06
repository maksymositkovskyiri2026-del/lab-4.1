// Lab_04_1.cpp
// Осітковський Максим
// Лабораторна робота № 4.1
// Цикли.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, N, i;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	// спосіб 1
	S = 0;
	i = k;
	while (i <= N)
	{
		S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
		i++;
	}
	cout << S << endl;

	// спосіб 2
	S = 0;
	i = k;
	do {
		S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
		i++;
	} while (i <= N);
	cout << S << endl;

	// спосіб 3
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
	}
	cout << S << endl;

	// спосіб 4
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += sin(i) * cos(i) / (1 + pow(sin(i), 2));
	}
	cout << S << endl;

	return 0;
}