#include <iostream>
using namespace std;

struct Dimensions {

	int length;
	int width;
	int height;

	//constructor
	Dimensions(int L = 1, int W=1, int H =1) {
		length = L;
		width = W;
		height = H;
	}
};


int main12333() {
	Dimensions box = { 12,6,3 };
	//Dimensions box2 = { 12,  , 3 };
	//Dimensions box3 = { 12,3, };
	Dimensions box4; //default value가 1로 설정되어 있으므로  이렇게 선언
	//cout << box.length << " " << box.width << " " << box.height << endl;
	//cout << box3.length << " " << box3.width << " " << box3.height << endl;
	cout << box4.length << " " << box4.width << " " << box4.height << endl;

	Dimensions box5 = { 3,4,5 };
	cout << box5.length << " " << box5.width << " " << box5.height << endl;

	return 0;
}