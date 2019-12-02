#include <iostream>
using namespace std;
int lineintersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
int main122332111111111() {
	int t = 0;

	int x1, x2, x3, x4, y1, y2, y3, y4 = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> x3 >> y3 >> x4 >> y4;
		cout << lineintersection(x1, y1, x2, y2, x3, y3, x4, y4) << endl;
	}
	return 0;
}

int lineintersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {

	int vertical = 0;
	int horizental = 0;

	if (x1 == x2) {
		vertical = 1;
	}
	else {
		horizental = 1;
	}

	int answer = 0;

	if (vertical == 1) {
		if ((((y1 < y3) && (y3 < y2)) || ((y2 < y3) && (y3 < y1))) && (((x3 < x1) && (x1 < x4)) || ((x4 < x1) && (x1 < x3)))) {
			answer = 1;
		}
		else if ((x4 == x1 || x3 == x1) && ((y2 <= y3 && y3 <= y1) || (y1 <= y3 && y3 <= y2)) || ((y1 == y3 || y2 == y3) && ((x3 <= x1 && x1 <= x4) || (x4 <= x1 && x1 <= x3)))) {
			answer = 2;
		}
		else {
			answer = 0;
		}
	}

	else {
		if ((((y3 < y1) && (y1 < y4)) || ((y4 < y1) && (y1 < y3))) && (((x1 < x3) && (x3 < x2)) || ((x2 < x3) && (x3 < x1)))) {
			answer = 1;
		}
		else if ((x2 == x3 || x1 == x3) && ((y4 <= y1 && y1 <= y3) || (y3 <= y1 && y1 <= y4)) || ((y3 == y1 || y4 == y1) && ((x1 <= x3 && x3 <= x2) || (x2 <= x3 && x3 <= x1)))) {
			answer = 2;
		}
		else {
			answer = 0;
		}
	}
	return answer;
}
/*
#include <iostream>
using namespace std;
int lineintersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
int main	() {
	int t = 0;

	int x1, x2, x3, x4, y1, y2, y3, y4 = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> x3 >> y3 >> x4 >> y4;
		cout << lineintersection(x1, y1, x2, y2, x3, y3, x4, y4) << endl;
	}
	return 0;
}

int lineintersection(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {

	int vertical = 0;
	int horizental = 0;

	if (x1 == x2) {
		vertical = 1;
	}
	else {
		horizental = 1;
	}

	int answer = 0;

	if (vertical == 1) { 
		if ((((y1 < y3) && (y3 < y2)) || ((y2 < y3) && (y3 < y1))) && (((x3 < x1) && (x1 < x4)) || ((x4 < x1) && (x1 < x3)))) {
			answer = 1;
		}
		else if ((x4 == x1 || x3 == x1) && ((y2<=y3 && y3 <= y1) || (y1 <= y3 && y3 <= y2))) {
			answer = 2;
		}
		else {
			answer = 0;
		}
	}

	else {
		if ((((y3 < y1) && (y1 < y4)) || ((y4 < y1) && (y1 < y3))) && (((x1 < x3) && (x3 < x2)) || ((x2 < x3) && (x3 < x1)))) {
			answer = 1;
		}
		else if ((x2 == x3 || x1 == x3) && ((y4 <= y1 && y1 <= y3) || (y3 <= y1 && y1 <= y4))) {
			answer = 2;
		}
		else {
			answer = 0;
		}
	}
	return answer;
}91점

접할때 꼭지점이 겹치면서 x 사이에 있어야함 
|| ((y1 == y3 || y2 == y3) && ((x3<=x1 && x1<= x4) || (x4<=x1 && x1<=x3)))
116번줄을 answer 2가 되는 조건문 각각에 추가하니까 100점 뜸 시발
*/