#include <iostream>
using namespace std;

int isPrime( int num) {
    int c = 0;
    if (num <= 1) {
        return 0;
    }
    for (int r = 2; r <= num - 1; r++) {

        if (num % r == 0) {
            c = 1;
        }
    };
    if (c == 1) {
        return 0;
    }
    else {
        return num;
    };
}


int main()
{
    int n, i = 0, work = 0, plus, minus;
    cin >> n;
    while (work == 0) {
        plus = n + i;
        minus = n - i;
        if (isPrime(plus) != 0) {
            work = work + 1;
            }
        if (isPrime(minus) != 0) {
            work = work + 2;
        }
        i++;
    }
    if (work == 3) {
        if (plus == minus) {
            cout << "n is the closest value : " << n;
        }
        else {
            cout << "there are two closest values : " << isPrime(minus) <<  "; " << isPrime(plus);
        }
    }
    if (work == 2) {
        cout << "closest value : " << isPrime(minus);
    }
    if (work == 1) {
        cout << "closest value : " << isPrime(plus);
    }

}