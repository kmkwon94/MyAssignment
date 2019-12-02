
/*#include <iostream>
using namespace std;

struct point {
	int x;
	int y;
};

struct rectangle {
	struct point pt1;
	struct point pt2;
};

int main() {
	struct rectangle r = { {10,20} ,{30,40} };
	struct rectangle *rp;
	rp = &r;

	cout << "rp.pt1.x = " << r.pt1.x << endl;
	cout << "rp->pt1.x = " << rp->pt1.x << endl;
	cout << "(r.pt1).x = " << (r.pt1).x << endl;
	cout << "(rp->pt1).x = " << (rp->pt1).x << endl;

	return 0;
}*/

/*
#include <iostream>
using namespace std;
void printRect(rectangle &r);
void printRectangles(rectangle *arr, int size);
struct point {
	int x;
	int y;
};

struct rectangle {
	struct point pt1;
	struct point pt2;
};

void printRect(rectangle &r) {
	cout << "<" << r.pt1.x << " , " << r.pt1.y << ">" << " <" << r.pt2.x << " , " << r.pt2.y << ">" << endl;

}
void printRectangles(rectangle *arr, int size) {
	for (int i = 0; i < size; i++) {
		printRect(arr[i]);
	}
}
int main() {

	int i = 0;
	struct rectangle rects[] = { {{1,2},{3,4}},{{5,6},{7,8} } };

	printRectangles(rects , 2);
	/*
	for (i = 0; i < 2; i++) {
		printRect(rects[i]);
	}
	
return 0;
}
*/

/*typedef 사용한거
#include <iostream>
using namespace std;

typedef struct point POINT;
typedef struct rectangle RECT;

void printRect(RECT &r);

struct point {
	int x;
	int y;
};

struct rectangle {
	POINT pt1;
	POINT pt2;
};

void printRect(RECT &r) {
	cout << "<" << r.pt1.x << " , " << r.pt1.y << ">" << " <" << r.pt2.x << " , " << r.pt2.y << ">" << endl;
}

int main() {

	int i = 0;
	RECT rects[] = { {{1,2},{3,4}},{{5,6},{7,8} } };

	for (i = 0; i < 2; i++) {
		printRect(rects[i]);
	}

	return 0;
}
*/