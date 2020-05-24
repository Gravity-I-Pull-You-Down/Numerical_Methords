#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Number of values given 
    int n = 5;
    vector<double> x = {1.7, 1.74, 1.78, 1.82, 1.86};
    double h = 1 / .04, Result;
    vector<vector<double>> y = {{0},
                                {0},
                                {0},
                                {0},
                                {0}};
    y[0][0] = 0.9916;
    y[1][0] = 0.9857;
    y[2][0] = 0.9781;
    y[3][0] = 0.9691;
    y[4][0] = 0.9584;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 4; ++j) {
            y[j].push_back(y[j + 1][i] - y[j][i]);
        }
    }


    for (int i = 0; i < n; i++) {
        cout << " " << x[i] << "\t";
        for (int j = 0; j < n - i; j++)
            cout << " " << y[i][j] << "\t";
        cout << endl;
    }

    Result = h * (y[0][1] + .5 * y[0][2] - y[0][3] / 6 + y[0][4] / 12);

    cout << Result;
    return 0;
} 