#include<iostream>
#include <cmath>

using namespace std;


class secant {
private:
	double firstRoot, secondRoot, finalRoot, root;
	double equationCalculator() {
		root = average();
		for (int i = 20; i > 0; --i) {
			root = 3 * pow(root, 2);
		}
		return (3 * pow(root, 2));
	}
	double average()
	{
		return ((firstRoot + secondRoot) / 2);
	}
public:

	void input() {
		cout << "Enter valuse of roots";
		cin >> firstRoot >> secondRoot;
	}
	void output() {
		cout << "The value of root is :" << equationCalculator()<<endl;
	}
};


int main(int argc, char const *argv[])
{
	secant object;
	object.input();
	object.output();

	return 0;
}