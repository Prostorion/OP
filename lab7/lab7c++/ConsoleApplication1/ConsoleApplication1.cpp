#include <iostream>
#include <ctime>
using namespace std;

void avarage(int k, double* array, int Asize) {
    int biggerK = 0;
    double result = 0;
    for (int n = 0; n <= Asize - 1; n++) {
        if (array[n] > k) {
            biggerK++;
            result += array[n];
        }

    }
    if (biggerK != 0) {
        result /= biggerK;
    }
    cout << "Quantity of numbers bigger than k: " << biggerK << endl;
    cout << "Avarage: " << result << endl;
    for (int l = 0; l <= Asize - 1; l++) {
        if (array[l] > k) {
            array[l] = result;
        }
    }
}

int main() { 
    srand(time(NULL));
    cout << "Enter size of array: ";
    int size = 6, k;
    cin >> size;
    double* arr = new double[size];
    cout << "Original array:" << endl;
    for (int i = 0; i <= size - 1; i++) {
        int num = rand() % 1001;
        arr[i] = num;
        cout << arr[i] << " ";
    }
    cout << endl << "Enter k: ";

    cin >> k;
    avarage(k, arr, size);
    cout << "Result: " << endl;
    for (int l = 0; l <= size - 1; l++) {
        cout << arr[l] << " ";
    }
    delete[] arr;
}

