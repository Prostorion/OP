
#include <iostream>
using namespace std;
int main()
{
    double a1, a2, b1, b2, c1, c2;
    cout << "a1\n";
    cin >> a1;
    cout << "a2\n";
    cin >> a2;
    cout << "b1\n";
    cin >> b1;
    cout << "b2\n";
    cin >> b2;
    cout << "c1\n";
    cin >> c1;
    cout << "c2\n";
    cin >> c2;
    if (a1 / a2 == b1 / b2) {
        if (a1 / a2 == c1 / c2) {
            cout << "Plenty";
        }
        else
            cout << "No solutions";
    }
    else
        cout << "One solution";
}

