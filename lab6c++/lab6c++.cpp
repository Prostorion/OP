#include <iostream>
#include <cmath>
using namespace std;

double myAtan(double x, int n);
void result(double x, int n);

int main() {
	double x;
	int n;
	cout << "Enter number: ";
	cin >> x;
	cout << "Enter accuracy (1/number): ";
	cin >> n;
	cout << "arctg: " << myAtan(x, n) << endl;
	result(x, n);

}

double myAtan(double x, int n) {
	double a = x;
	double sum = a;
	double b = a;
	double E = 1 / n;
	for (int i = 1; a > E; i++) {
		b *= -x * x;
		a *= b / (2 * i + 1);
		sum += a;
	}
	return sum;
}

void result(double x, int n) {
	cout << "Result: ";
	if (x > 1) {
		cout << myAtan(x, n) / myAtan(x - 5, n);
	}
	else if (x <= 1 && x >= 0) {
		cout << myAtan(x, n) + myAtan(2 * x, n);
	}
	else cout << "x isn't match";
}