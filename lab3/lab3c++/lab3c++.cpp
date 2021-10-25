
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, k = 1, sum = 0, a;
 cout << "x\n";
 cin >> x;
 while (k <= 10 || abs(a) > pow(10, -4)) {
	 a = pow(x, 2 * k) * sin(pow(x, k)) / (pow(k, 2));
	 sum += a;
	 k += 1;
 }

 cout << sum;
}




