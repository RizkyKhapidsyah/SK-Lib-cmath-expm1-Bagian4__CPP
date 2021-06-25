#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	double x = 2.19, result;
	result = expm1(x);

	cout << "e^" << x << " - 1 = " << result << endl;

	_getch();
	return 0;
}