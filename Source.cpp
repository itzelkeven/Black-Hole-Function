#include <iostream>
using namespace std;

//declaration
void r(float m);


int main() {
	float m;
	while (1) {
		cout << "Enter Mass in Kilograms:" << endl;
		cin >> m;
		r(m);//function call
	}
}


//function definition
void r(float m) {
	float r;
	const float g = 6.674e-11;
	const float c = 2.998e8;
	r = ((2 * g) * m) / (c * c);
	cout << r << endl;
}
