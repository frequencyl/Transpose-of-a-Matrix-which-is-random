#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
using namespace std;
const int ROW = 5;
const int COLUMN = 6;
int main() {
	srand(time(NULL));
	int matrix[ROW][COLUMN];
	int transpose[COLUMN][ROW];
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			matrix[i][j] = rand() % 10 + 1;

		}
	}
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++) {
			cout << left << setw(3) << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl << "TRANSPOSE OF MATRIX" << endl;
	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++) {
			transpose[i][j] = matrix[j][i];
			cout << left << setw(3) << transpose[i][j];
		}
		cout << endl;
	}
	//THIS PROJECT TOPIC IS TAKEN FROM SAKARYA UNIVERSITY LECTURE NOTES
	// I DID IT MYSELF WITHOUT ANT CHEATING 
	//OZAN GUL
}
