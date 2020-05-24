#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double EquationCalculator(double x) {
    return pow(x, 3) - 2 * x - 5;
}

double NextRoot(double x, double y) {
    y = x - EquationCalculator(x) * ((y - x) / (EquationCalculator(y) - EquationCalculator(x)));
    return y;
}

int main() {
    vector<double> Roots;
    double FirstRoot, SecondRoot, temp;
    for (int i = 0; i < 100; ++i) {
        if (signbit(EquationCalculator(i)) != signbit(EquationCalculator(i + 1))) {
            FirstRoot = i;
            SecondRoot = i + 1;
            break;
        }
    }
    Roots.push_back(FirstRoot);
    for (int j = 0; j < 100; ++j) {
        temp = NextRoot(FirstRoot, SecondRoot);
        if (EquationCalculator(FirstRoot) == 0) {
            cout << "Root is " << FirstRoot << endl;
            break;
        } else if (EquationCalculator(SecondRoot) == 0) {
            cout << "Root is " << SecondRoot << endl;
            break;
        }
        if (signbit(EquationCalculator(FirstRoot)) == signbit(EquationCalculator(temp)))
            FirstRoot = temp;
        else
            SecondRoot = temp;
        if (Roots[Roots.size() - 1] == temp)
            break;
        Roots.push_back(temp);
    }

    cout << Roots[Roots.size() - 1];
    return 0;
}
