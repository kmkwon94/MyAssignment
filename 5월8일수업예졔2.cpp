#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
struct point {
	int x;
	int y;
};//p2; <= �̷��� ���� ������ point p2; �� �ٷ� �������

int main112223221123() {
	point p1;
	memset(&p1, 0x00, sizeof(p1)); //zero set

	cout << "p1.x = " << p1.x << endl;
	cout << "p1.y = " << p1.y << endl;

	return 0;
}