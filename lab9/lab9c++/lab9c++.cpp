/*
Знаю, що можна було використовувати find(), але хотів прописати все сам 
(напишіть у таблиці з оцінками якщо не підходить)
*/
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


string result(string s) {

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            int m = i;
            while (s[m] != ')' && m < s.length()) {
                m++;
            }
            if (m < s.length()) {
                s[i] = '0';
                s[m] = '0';
            }
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == ')') {
            return "Wrong";
        }
    }
    return "Right";

}
int main()
{
    string str;
    getline(cin, str);
    cout << result(str);
}
