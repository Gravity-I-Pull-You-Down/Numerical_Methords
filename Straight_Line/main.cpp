#include <iostream>
#include <vector>
#include <valarray>
#include <numeric>

using namespace std;

int main() {
    valarray<int> x = {6, 7, 7, 8, 8, 8, 9, 9, 10};
    valarray< int> y = {5, 5, 4, 5, 4, 3, 4, 3, 3};
    vector<int> xy, XSquare;
    for (auto a = 0; a < x.size(); ++a) {
        xy.push_back(x[a] * y[a]);
        XSquare.push_back(x[a] * x[a]);
    }
    double Sum_x = x.sum(), Sum_y = y.sum(), Sum_xy = accumulate(xy.begin(), xy.end(), 0), XSquareSum = accumulate(
            XSquare.begin(), XSquare.end(), 0), n = x.size();
    double b = (n * Sum_xy - Sum_x * Sum_y) / (n * XSquareSum - Sum_x * Sum_x);
    double a = (Sum_y - b * Sum_x) / n;
    cout << endl << "Y = " << a << " + " << b << "X";
    return 0;
}
