#include <bits/stdc++.h>
using namespace std;

class Matrix {
private:
    int rows;
    int columns;
    vector<vector<double>> m;

public:
    Matrix(int r, int c) : rows(r), columns(c), m(vector<vector<double>>(r, vector<double>(c, 0))) {}

    // Set value at position (i, j)
    void set(int i, int j, double value) {
        m[i][j] = value;
    }
    void set(vector<vector<double>> v) {
        for (int i = 0; i<rows; ++i) for (int j = 0; j<columns; ++j) m[i][j] = v[i][j];
    }

    // Get number of rows
    int getRows() const {
        return rows;
    }

    // Get number of columns
    int getColumns() const {
        return columns;
    }

    // Multiply two matrices
    Matrix multiply(const Matrix& other) {
        int a = rows;
        int n = columns;
        int b = other.columns;

        Matrix result(a, b);

        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                double sum = 0;
                for (int k = 0; k < n; ++k) {
                    sum += m[i][k] * other.m[k][j];
                }
                result.set(i, j, sum);
            }
        }

        return result;
    }

    // Print the matrix
    void print() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
	Matrix m1 = Matrix(3, 2);
	m1.set({{1, 4}, {3, 9}, {8, 6}});

	Matrix m2 = Matrix(2, 2);
	m2.set({{1, 6}, {2, 9}});

	if (m1.getColumns() != m2.getRows()) {
    	cout << "Matrices are not compatible for multiplication." << endl;
	} else {
    Matrix result = m1.multiply(m2);

    // Display the result matrix
    result.print();
}
}