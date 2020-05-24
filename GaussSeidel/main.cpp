#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<double>> Base = {{20, 1,  -2},
                                   {3,  20, -1},
                                   {2,  -3, 20}};
    vector<double> Resultant = {17, -18, 25}, m = {0, 0, 0}, n = {0,0,0};
    int iterations = 100;
    while (iterations > 0) {
        for (int i = 0; i < 3; i++) {
            n[i] = (Resultant[i] / Base[i][i]);
            for (int j = 0; j < 3; j++) {
                if (j == i)
                    continue;
                n[i] = n[i] - ((Base[i][j] / Base[i][i]) * m[j]);
                m[i] = n[i];
            }
        }
        iterations--;
    }
    for (int k = 0; k < 3; ++k) {

        cout << "x" << k + 1 << "=" << n[k] << " ";
        cout << "\n";
    }
    return 0;
}
