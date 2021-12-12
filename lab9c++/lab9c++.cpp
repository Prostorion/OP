
#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

bool result(char s[]); // find out if all open parentheses are closed (0 - all ok)


int main()
{
    char str[1001];

    gets_s(str);

    if (result(str) == 0) {
        cout << "OK";
    }
    else cout << "Something is wrong";
    cout << str;
}



bool result(char s[]) {

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            int m = i;
            while (s[m] != ')' && m < strlen(s)) {
                m++;
            }
            if (m < strlen(s)) {
                s[i] = '0';
                s[m] = '0';
            }
        }
    }
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == ')') {
            return 1;
        }
    }
    return 0;

}