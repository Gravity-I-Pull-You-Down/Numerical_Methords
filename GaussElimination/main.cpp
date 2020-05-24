#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<double>> Base = {{1, 4,  -1, -5},
                                   {1, 1,  -6, -12},
                                   {3, -1, -1, 4}};
    for (int k = 0; k < 3; ++k) {
        double temp = Base[k][0];
        for (int i = 0; i < 4; ++i) {
            Base[k][i] /= temp;
        }
    }
    for (int l = 0; l < 4; ++l) {
        Base[1][l] -= Base[0][l];
        Base[2][l] -= Base[0][l];
    }
    for (int k = 1; k < 3; ++k) {
        double temp = Base[k][1];
        for (int i = 1; i < 4; ++i) {
            Base[k][i] /= temp;
        }
    }
    for (int l = 1; l < 4; ++l) {
        Base[2][l] -= Base[1][l];
    }
    double x, y, z;
    z = Base[2][3] / Base[2][2];
    y = Base[1][3] - Base[1][2] * z;
    x = Base[0][3] - Base[0][2] * z - Base[0][1] * y;

    cout << "X = " << x << " Y = " << y << " Z = " << z << endl;
    return 0;
}
