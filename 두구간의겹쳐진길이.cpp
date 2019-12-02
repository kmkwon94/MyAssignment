/*
#include <iostream>
using namespace std;
int lengthOfIntervalIntersection(int a, int b, int c, int d);

int main(void)
{
	int t;
	int h, m;
	cin >> t;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d;
		cout << lengthOfIntervalIntersection(a, b, c, d) << endl;
	}
	return 0;
}
int lengthOfIntervalIntersection(int a, int b, int c, int d)
{
	int sub = 0;
	int arr[4] = { a,b,c,d };
	int max = 0;

	for (int i = 0; i < 4; i++) {
		if (max <= arr[i]) {
			max = arr[i];
		}
		else {
			max = max;
		}

	}
	if (d == max) {
		if (b == c) {
			sub = c - b;
		}
		else if (b > c && c > a) {
			sub = b - c;
		}
		else if (a >= c) {
			sub = b - a;
		}
		else if (c > b) {
			sub = -1;
		}
		else if (a == c && max == b) {
			sub = b - a;
		}
	}
	else if (b == max) {
		if (a == d) {
			sub = a - d;
		}
		else if (d > a && a > c) {
			sub = d - a;
		}
		else if (c >= a) {
			sub = d - c;
		}
		else if (a > d) {
			sub = -1;
		}
		else if (c == a && max == d) {
			sub = b - a;
		}
	}

	return sub;
}
*/