#include <iostream>
using namespace std;
float Circumference(int r);
int main() {
	int r;
	char inp{};
	cout << "Press 'q' to quit program" << endl;
	while (inp != 'q') {
		cout << "Find Circumference of Circle" << endl;
		cout << "Please enter Radius value" << endl;
		cin >> r;
		Circumference(r);
	}
}
float Circumference (int r){
	const float pi = 3.14159;
	float C;
	int rr;
	C = (2 * pi * r);
	cout << "The Circumference is: " << C << endl;
}