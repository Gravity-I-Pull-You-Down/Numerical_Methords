#include<iostream>
#include<math.h>

using namespace std;

class bisection {
private:
	double firstRoot, secondRoot, finalRoot, pevRoot = 0;
public:
	double equasionCalculator(double final) {
		//return (pow(final, 3) - (final * 2) - 5);
		return (pow(final, 3) - 4);
	}
	double average(double first , double second) {
		return ((first + second) / 2);
	}
	int itrator() {
		for (int i = 0; i < 50; ++i)
		{	double root = equasionCalculator(average(firstRoot, secondRoot));
			//cout << root << endl;
			if (pevRoot == root )
				break;
			if (root > 0) {
				secondRoot = average(firstRoot, secondRoot);
				//cout << "Changing Second root" << secondRoot << endl;
			}
			else if (root < 0) {
				firstRoot = average(firstRoot, secondRoot);
				//cout << "Changing First root " << firstRoot << endl;
			}
			else
				break;
		}
		finalRoot = average(firstRoot, secondRoot);
		return 0;
	}
	void input() {
		cin >> firstRoot >> secondRoot;
	}
	void output() {
		cout << firstRoot;
	}

	int check() {
		if (equasionCalculator(firstRoot) >= 0 || equasionCalculator(secondRoot) <= 0) {
			cout << "Roots are not valid" << endl;
			return 0;
		}
		else
			return 1;
	}
};


int main(int argc, char const *argv[])
{

	bisection bis;
	cout << "Enter the limits of equasion " << endl;
	bis.input();
	if(bis.check()){
		
	bis.itrator();
	bis.output();
	}
	return 0;
}