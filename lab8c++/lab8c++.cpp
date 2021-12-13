

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void generate(int s, int m[100][100]); // generate numbers in matrix
void output(int h, int w, int m[100][100]); // output matrix
int find(int s, int m[100][100]); // find max element and delete his column
void deleteC(int s, int m[100][100], int c); // delete column

int main()
{
	srand(time(NULL));
	int size;
	cout << "Enter size of matrix: ";
	cin >> size;
	size -= 1;
	int matrix[100][100];

	cout << "Original matrix: " << endl;
	generate(size, matrix);
	output(size, size, matrix);
	
	int column_of_max = find(size, matrix);
	cout << "Column, which contains the biggest element over the main diagonal : " << column_of_max + 1 << endl;
	deleteC(size, matrix, column_of_max);
	output(size, size-1, matrix);

}

void generate(int s, int m[100][100]) {
	for (int j = 0; j <= s; j++) {
		for (int i = 0; i <= s; i++) {
			m[j][i] = rand() % 101;
		}
	}
}

void output(int h, int w, int m[100][100]) {
	for (int j = 0; j <= h; j++) {
		for (int i = 0; i <= w; i++) {
			cout << setw(4) << m[j][i];
		}
		cout << endl;
	}
}
int find(int s, int m[100][100]) {
	int max = 0;
	int column;
	for (int j = 0; j <= s; j++) {
		for (int i = 0; i <= s; i++) {
			if (i > j && m[j][i] > max) {
				max = m[j][i];
				column = i;
			}
		}
	}
	return column;
}
void deleteC(int s, int m[100][100], int c) {
	for (int j = 0; j <= s; j++) {
		for (int i = c; i <= s-1; i++) {
			m[j][i] = m[j][i + 1];
		}
	}
}