#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<double> x = {0, 1, 2, 3}, y = {1.05, 2.10, 3.85, 8.30}, xy = {}, XSquare = {}, Y = {};
    for (int j = 0; j < y.size(); ++j) {
        Y.push_back(log(y[j]));
    }
    double n = 4;
    for (int i = 0; i < x.size(); ++i) {
        xy.push_back(x[i] * Y[i]);
        XSquare.push_back(x[i] * x[i]);
    }

    double A = (accumulate(x.begin(), x.end(), 0) * accumulate(xy.begin(), xy.end(), 0) -
                accumulate(Y.begin(), Y.end(), 0) * accumulate(XSquare.begin(), XSquare.end(), 0)) /
               (accumulate(x.begin(), x.end(), 0) *
                (accumulate(x.begin(), x.end(), 0) - n * accumulate(XSquare.begin(), XSquare.end(), 0)));
    double b = (accumulate(Y.begin(), Y.end(), 0) - n * A) / accumulate(x.begin(), x.end(), 0);
    A = exp(A);
    cout << "Y = " << A << " e^(" <<b <<"X)";
    return 0;
}
