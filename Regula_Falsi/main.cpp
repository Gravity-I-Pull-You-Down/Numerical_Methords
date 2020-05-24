#include <iostream>
#include <cmath>

using namespace std;

double calculation(double var) {
    return pow(var, 3) - 4 * var + 1;
}

// Prints root of calculation(x) in interval [a, b] 
void regulaFalsi(double a, double b) {
    if (calculation(a) * calculation(b) >= 0) {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;  // Initialize result 

    for (int i = 0; i < 100; i++) {
        // Find the point that touches x axis 
        c = (a * calculation(b) - b * calculation(a)) / (calculation(b) - calculation(a));

        // Check if the above found point is root 
        if (calculation(c) == 0)
            break;

            // Decide the side to repeat the steps 
        else if (calculation(c) * calculation(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c;
}

// Driver program to test above calculationtion 
int main() {
    // Initial values assumed
    int i = 0;
    while (!((calculation(i) < 0 && calculation(i + 1) > 0) || (calculation(i) > 0 && calculation(i + 1) < 0))) {
        ++i;
    }
    double a = i, b = i + 1;

    cout << calculation(a) << " for " << a << endl << " " << calculation(b) << " for " << b << endl;
    regulaFalsi(a, b);
    return 0;
} 