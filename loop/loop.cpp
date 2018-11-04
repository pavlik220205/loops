#include "pch.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
int main()
{
	int  N, dalit = 0, fib=0, kvmax = 0;
	double faktorial = 1,summa = 1;

	do {
		cout << "Enter Natural N = ";
		cin >> N;
	} while (N < 0);

	for (int i = 1; i <= N; i++) {

		if (N % i == 0) {
			dalit += 1;
		}

		if ((i*i) % 100 == 24)
		{
			kvmax = i;
		}

		if (i >= 2) {
			if (i % 2) {
				summa += (1. / i);
			}
			else {
				summa -= (1. / i);
			}
		}
		fib += i;
		faktorial *= i;
	}

	cout << "Factorial =" << faktorial<<"\n";
	cout << "Summa =" << summa << "\n";
	cout << "Divisor number =" << dalit << "\n";
	if (kvmax == 0) {
		cout << "Kv. 24 ost. netu	\n";
	}else {
		cout << "Kv. 24 ost. = " << kvmax << "\n";
	}
	cout << "Fib number =" << fib << "\n";
	system("pause");
	return 0;
}