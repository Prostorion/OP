
#include <iostream>
using namespace std;
int main()
{
	double n, i1 = 0, i2 = 0, i3 = 1.5, iN;
		cout << "n\n";
	cin >> n;
    for (double i = 4; i <= n; i++) {
        iN = (i + 1) / (i * i + 1) * i3 - i2 * i1;
        i1 = i2;
        i2 = i3;
        i3 = iN;
    }
    cout << iN;
}
