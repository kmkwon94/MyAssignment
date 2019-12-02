#include <iostream>
using namespace std;
void sc(int ax, int ay, int bx, int by, int cx, int cy);

int main99999999992222999()
{
	int t;
	int ax, ay, bx, by, cx, cy;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		sc(ax, ay, bx, by, cx, cy);
	}
	return 0;
}
void sc(int ax, int ay, int bx, int by, int cx, int cy)
{
	double s;
	int c;

	int temp = ax * by + bx * cy + cx * ay;
	temp = temp - ay * bx - by * cx - cy * ax;

	if (temp > 0) {
		c = 1;
	}
	else if (temp < 0) {
		c = -1;
	}
	else {
		c = 0;
	}

	s = ((bx - ax)*(cy - ay) - (cx - ax)*(by - ay));
	if (s < 0) {
		s = s * -1;
	}

	cout << s << " " << c << endl;
}