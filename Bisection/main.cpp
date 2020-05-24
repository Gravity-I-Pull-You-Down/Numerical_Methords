#include<iostream>
#include<cmath>

using namespace std;

class bisection {
private:
    double firstRoot, secondRoot, finalRoot, pevRoot = 0;
public:
    double equasionCalculator(double final) {
        //return (pow(final, 3) - (final * 2) - 5);
        return (pow(final, 3) - 4 * final - 9);
    }

    double average(double first, double second) {
        return ((first + second) / 2);
    }

    int itrator() {
        for (int i = 0; i < 50; ++i) {
            double root = equasionCalculator(average(firstRoot, secondRoot));
            //cout << root << endl;
            if (pevRoot == root)
                break;
            if (root > 0) {
                secondRoot = average(firstRoot, secondRoot);
                //cout << "Changing Second root" << secondRoot << endl;
            } else if (root < 0) {
                firstRoot = average(firstRoot, secondRoot);
                //cout << "Changing First root " << firstRoot << endl;
            } else
                break;
        }
        finalRoot = average(firstRoot, secondRoot);
        return 0;
    }

    void input(int i, int j) {
        firstRoot = i;
        secondRoot = j;
    }

    void output() {
        cout << firstRoot;
    }

    int check() {
        if (equasionCalculator(firstRoot) >= 0 || equasionCalculator(secondRoot) <= 0) {
            cout << "Roots are not valid" << endl;
            return 0;
        } else
            return 1;
    }
};


int main(int argc, char const *argv[]) {

    bisection bis;
    for (int i = 0; i < 100; ++i) {
        if (signbit(bis.equasionCalculator(i)) != signbit(bis.equasionCalculator(i + 1))) {

            bis.input(i, i + 1);
        }
    }
    if (bis.check()) {

        bis.itrator();
        bis.output();
    }
    return 0;
}