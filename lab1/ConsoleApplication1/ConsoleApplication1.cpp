

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double hip, kat;
	cout << "Type hypotenuse: ";
	cin >> hip;
	cout << "Type leg: ";
	cin >> kat;
	float okat = sqrt(hip * hip - kat * kat);
	cout << "Other leg: ";
	cout << okat;


}
