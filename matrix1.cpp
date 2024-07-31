#include <bits/stdc++.h>
using namespace std;

class Matrix {
    public: 
        int a,b;
        double** m;

        Matrix(int a, int b) {
            this->a = a;
            this->b = b;
            m = new double*[a];
            for (int i =0; i<a;++i) {
                m[i] = new double[b];
                for (int j = 0; j < b; ++j) m[i][j] = 0;
            }
        }

        void print();

        void set(int i, int j, double value);
        void set(vector<vector<int>> v);

        ~Matrix() {
            for (int i = 0; i < a; ++i) {
                delete[] m[i];
            }
            delete[] m;
        }
};

void Matrix::print() {
    for (int i = 0; i<a; ++i) {
        for (int j = 0; j<b;++j) cout << m[i][j] << ' ';
        cout << endl;
    }
}

void Matrix::set(int i, int j, double value) {
    if (i >= 0 && i < a && j >= 0 && j < b) {
        m[i][j] = value;
    } else {
        std::cout << "Invalid position." << std::endl;
    }
}

void Matrix::set(vector<vector<int>> v) {
    for (int i = 0; i<a; ++i) {
        for (int j = 0 ; j<b; ++j) m[i][j] = v[i][j];
    }
}

template<typename T> bool isSquared(vector<vector<T>> m) {
    return m[0].size() == m.size() ? 1 : 0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // ########### TRANSPANATION ##########

    // m1.print();
    // cout << endl;
    // m2.print();
    // cout<<endl;
    // Matrix mT = Matrix(b,a);

    // for (int i = 0; i < a; ++i) {
    //     for (int j = 0; j < b; ++j) {
    //         auto current = m.m[i][j];
    //         mT.set(j, i, current);
    //     }
    // }

    // cout << endl;
    // mT.print();

    /* ############# MULTIPLICATION ############# */ 

    // Matrix m1 = Matrix(3,2);
    // m1.set({{1,4},{3,9},{8,6}});

    // Matrix m2 = Matrix(2,2);
    // m2.set({{1,6},{2,9}});
    
    // Matrix result = Matrix(m1.a, m2.b);
    // for (int i = 0; i < m1.a; ++i) {
    //     for (int j = 0; j < m2.b; ++j) {
    //         double sum = 0;
    //         for (int k = 0; k < m1.b;++k) sum+=m1.m[i][k]*m2.m[k][j];
    //         result.set(i,j,sum);
    //     }   
    // }

    // result.print();

    /* ########################################## */

    vector<vector<int>> matrix1 = {{1,2},{2,3}};
    vector<vector<char>> matrix2 = {{1,5},{2,3}};

    cout << isSquared(matrix1)<<endl;
    cout << isSquared(matrix2);
}