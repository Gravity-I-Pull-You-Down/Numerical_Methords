#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, k;
    vector<vector<double>> Base = {{1, 1,  1, 9},
                                   {2, -3, 4, 13},
                                   {3, 4,  5, 40}}, Result = {{0},
                                                              {0},
                                                              {0}};
    double b;
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            if (i != j) {
                b = Base[i][j] / Base[j][j];
                for (k = 0; k < 4; k++) {
                    Base[i][k] = Base[i][k] - b * Base[j][k];
                }
            }
        }
    }
    cout << "\nThe solution is:\n";
    for (i = 0; i < 3; i++) {
        Result[i][0] = Base[i][3] / Base[i][i];
        cout << "x" << i << "=" << Result[i][0] << " ";
    }
    return 0;
}
