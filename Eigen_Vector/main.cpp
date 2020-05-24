#include <iostream>
#include <vector>

using namespace std;

vector<vector<double>> MatrixMultiplication(vector<vector<double>> Multiplyier, vector<vector<double>> Multiplicand) {
    vector<vector<double>> FinalResult{{0},
                                       {0},
                                       {0}};
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 1; ++j)
            for (int k = 0; k < 3; ++k) {
                FinalResult[i][j] += Multiplyier[i][k] * Multiplicand[k][j];
            }
    return FinalResult;
}

vector<vector<double>> shread(vector<vector<double>> EigenVector) {
    double max = EigenVector[0][0];
    for (int i = 0; i < 3; ++i) {
        if (max < EigenVector[i][0])
            max = EigenVector[i][0];
    }
    for (int i = 0; i < 3; ++i) {
        EigenVector[i][0] /= max;
    }
    return EigenVector;
}

int main() {
    vector<vector<double>> Base = {
            {3,  2, -2},
            {-1, 1, 4},
            {3,  2, -5}
    }, Assumption = {{1},
                     {1},
                     {1}};
    vector<vector<double>> Inverse = Base;
    vector<vector<double>> EigenVector = MatrixMultiplication(Base, Assumption);
    for (int j = 0; j < 100; ++j) {
        if (Assumption == shread(EigenVector))
            break;
        else {
            Assumption = shread(EigenVector);
            EigenVector = MatrixMultiplication(Base, Assumption);
        }
    }

    for (int k = 0; k < 3; ++k) {
        cout << Assumption[k][0] << endl;
    }

    return 0;
}
