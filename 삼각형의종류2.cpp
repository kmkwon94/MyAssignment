#include <iostream>
#include <math.h>
using namespace std;
int triangle(int x1, int y1, int x2, int y2, int x3, int y3);
int main12322112() {
	int t = 0;
	int x1, x2, x3, y1, y2, y3 = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		cout << triangle(x1, y1, x2, y2, x3, y3) << endl;
	}
	return 0;
}

int triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
	double x, y, z = 0.0;
	//제곱근은 나중에 추가해야 값이 정확해진다.

	x = pow(x1 - x2, 2) + pow(y1 - y2, 2); 
	y = pow(x1 - x3, 2) + pow(y1 - y3, 2);
	z = pow(x3 - x2, 2) + pow(y3 - y2, 2);

	if (sqrt(x)+ sqrt(y) <= sqrt(z) || sqrt(x) + sqrt(z) <= sqrt(y) || sqrt(z) + sqrt(y) <= sqrt(x)) {
		cout << x << " " << y << " " << z << endl;
		cout << sqrt(x + y) << "  1  " << sqrt(z) << endl;
		return 0;
	}
	else 	if (sqrt(x + y) == sqrt(z) || sqrt(x + z) == sqrt(y) || sqrt(y + z) == sqrt(x)) {
		cout << x << " " << y << " " << z << endl;
		cout << sqrt(x + y) << "  2  " << sqrt(z) << endl;
		return 1;
	}
	else if (sqrt(x + y) < sqrt(z) || sqrt(x + z) < sqrt(y) || sqrt(y + z) < sqrt(x)) {
		cout << x << " " << y << " " << z << endl;
		cout << sqrt(x + y) << "  3  " << sqrt(z) << endl;
		return 2;
	}
	else if (sqrt(x + y) > sqrt(z) || sqrt(x + z) > sqrt(y) || sqrt(y + z) > sqrt(x)) {
		cout << x << " " << y << " " << z << endl;
		cout << sqrt(x + y) << "  4  " << sqrt(z) << endl;
		return 3;
	}
	else {
		cout << x << " " << y << " " << z << endl;
		cout << sqrt(x + y) << "  5  " << sqrt(z) << endl;
		return 0;
	}
}
/*
	int xMin, xMax, yMin, yMax = 0;

	if (x1 >= x2) {
		xMax = x1;
		xMin = x2;
	}
	else {
		xMax = x2;
		xMin = x1;
	}
	if (xMax >= x3) {
		xMax = xMax;
	}
	else {
		xMax = x3;
	}

	if (y1 >= y2) {
		yMax = y1;
		yMin = y2;
	}
	else {
		yMax = y2;
		yMin = y1;
	}
	if (yMax >= y3) {
		yMax = yMax;
	}
	else {
		yMax = y3;
	}

	int a = (xMax - xMin);
	int b = yMax - yMin;
	int c = a*a + b*b;

	if (a*a + b*b == c) {
		cout << "직각 " << a << " "<< b << " "<< c << endl;;
		return 1;
	}
	else if (a*a + b*b > c) {
		cout << "둔각 " << a << " " << b << " " << c << endl;
		return 2;
	}
	else if (a*a + b*b < c) {
		cout << "예각 " << a << " " << b << " " << c << endl;
		return 3;
	}
	else {
		cout << "삼각형 X " << a << " " << b << " " << c << endl;
		return 0;
	}




	#include <iostream>
#include <math.h>
using namespace std;
int triangle(double x1, double y1, double x2, double y2, double x3, double y3);
int main() {
	int t = 0;
	double x1, x2, x3, y1, y2, y3 = 0.0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		cout << triangle(x1, y1, x2, y2, x3, y3) << endl;
	}
	return 0;
}

int triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
	double x, y, z = 0.0;

	x = sqrt(pow(x1 - x2, 2) + pow(y1- y2,2));
	y = sqrt(pow(x1 - x3, 2) + pow(y1- y3,2));
	z = sqrt(pow(x3 - x2, 2) + pow(y3- y2,2));

	if (x + y <= z || x + z <= y || z + y <= x) {
		return 0;
	}
	else 	if (pow(x, 2) + pow(y, 2) == pow(z, 2) || pow(x, 2) + pow(z, 2) == pow(y, 2) || pow(y, 2) + pow(z, 2) == pow(x, 2)) {
		return 1;
	}
	else if (pow(x, 2) + pow(y, 2) < pow(z, 2) || pow(x, 2) + pow(z, 2) < pow(y, 2) || pow(y, 2) + pow(z, 2) < pow(x, 2)) {
		return 2;
	}
	else if (pow(x, 2) + pow(y, 2) > pow(z, 2) || pow(x, 2) + pow(z, 2) > pow(y, 2) || pow(y, 2) + pow(z, 2) > pow(x, 2)) {
		return 3;
	}
	else {
		return 0;
	}
}
	*/