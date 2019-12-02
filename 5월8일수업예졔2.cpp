#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
struct point {
	int x;
	int y;
};//p2; <= 이렇게 써져 있으면 point p2; 를 바로 만든거임

int main112223221123() {
	point p1;
	memset(&p1, 0x00, sizeof(p1)); //zero set

	cout << "p1.x = " << p1.x << endl;
	cout << "p1.y = " << p1.y << endl;

	return 0;
}