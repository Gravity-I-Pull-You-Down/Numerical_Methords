#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double Fx(double i) {
    return pow(i, 3) - 3 * i - 5;
}

double dFx(double i) {
    return pow(i, 2) * 3 - 3;
}

double avg(double i, double j) {
    return (i + j) / 2;
}

int main() {
    cout << "f(x) = x³-3x-5 = 0" << endl;
    cout << "f'(x) = 3x²-3x = 0" << endl;
    double root, dashroot;
    int i = 0;
    while (!(Fx(i) < 0 && Fx(i + 1) > 0)) {
        ++i;
    }
    cout << "Root lies between " << i << " and " << i + 1 << endl;
    root = avg(i, i + 1);
    for (int i = 0; i < 10; ++i) {
        root = root - Fx(root) / dFx(root);
        cout << root << endl;
    }

    return 0;
}
