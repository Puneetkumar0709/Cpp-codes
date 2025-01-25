#include<iostream>
using namespace std;


void generatePascalsTriangle(int rows) {
    int triangle[rows][rows]; // Declare a 2D array

    for (int i = 0; i < rows; i++) {
        // First element of each row is always 1
        triangle[i][0] = 1;

        // Each element is the sum of the two elements above it
        for (int j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }

        // Last element of each row is always 1
        triangle[i][i] = 1;
    }

    // Print the triangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    generatePascalsTriangle(rows);

    return 0;
}
