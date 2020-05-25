#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double EquationCalculator(int x) {
    return 1 / (1 + pow(x, 2));
}

double Trapezoidal(vector<double> x) {
    double Result = 0;
    for (int i = 1; i < x.size() - 1; ++i) {
        Result += x[i];
    }
    Result = (x[0] + x[x.size() - 1] + 2 * Result) / 2;
    return Result;
}

double Simpson3by8(vector<double> x) {
    double Result = 0, all = 0;
    for (int i = 1; i < x.size() - 1; ++i) {
        all += x[i];
    }
    all -= x[(x.size() - 1) / 2];
    Result = 3 * (x[0] + x[x.size() - 1] + 3 * all + 2 * x[(x.size() - 1) / 2]) / 8;
    return Result;
}

double Simpson(vector<double> x) {
    double Result = 0, odd = 0, even = 0;

    for (int j = 1; j < x.size() - 1; j += 2) {
        odd += x[j];
    }
    for (int j = 2; j < x.size() - 1; j += 2) {
        even += x[j];
    }
    Result = (x[0] + x[x.size() - 1] + 4 * odd + 2 * even) / 3;
    return Result;
}

double Weddle(vector<double> x) {
    double Result = 0, odd = 0, even = 0, mid = 0;

    for (int j = 0; j < x.size() - 1; j += 2) {
        even += x[j];
    }
    for (int j = 1; j < x.size() - 1; j += 4) {
        odd += x[j];
    }
    for (int j = 3; j < x.size() - 1; j += 4) {
        mid += x[j];
    }
    Result = (even + 5 * odd + 6 * mid) * 0.3;
    return Result;
}


int main() {
    int h = 1;
    vector<double> solution;
    for (int i = 0; i < 7; ++i) {
        solution.push_back(EquationCalculator(i));
    }

    cout << "By Trapezoidal rule : " << Trapezoidal(solution) << endl;
    cout << "By Simpson 1/3 rule : " << Simpson(solution) << endl;
    cout << "By Simpson 3/8 rule : " << Simpson3by8(solution) << endl;
    cout << "By Weddle 3/8 rule : " << Weddle(solution) << endl;
    return 0;
}
