#include <iostream>
using namespace std;

struct Rectangle
{
	int height ;
	int width;

	void Print(Rectangle rect);
};

void Rectangle::Print(Rectangle rect) {
	cout << rect.height << " " << rect.width << endl;
}

int main1123332() {
	
	Rectangle rect1 = {50,70 };
	Rectangle rect2 = {100,200};

	rect1.Print(rect1);
	rect2.Print(rect2);

	return 0;
}


/*
void Print(Rectangle &rect) {
	cout << rect.height<< " " << rect.width << endl;
}
*/

/*
//�����ͷ� �̿��Ҷ�

void Print(Rectangle *rect);
int main() {
	
	Rectangle rect1 = {50,70 };
	Rectangle rect2 = {100,200 };
	Print(*rect1);
	Print(*rect2);

	return 0;
}

void Print(Rectangle *rect) {
	cout << rect->height<< " " << rect->width << endl;
}

*/
/*
//���۷����� ���鶧
void Print(Rectangle &rect);
int main() {
	
	Rectangle rect1 = {50,70 };
	Rectangle rect2 = {100,200 };
	Print(rect1);
	Print(rect2);

	return 0;
}

void Print(Rectangle &rect) {
	cout << rect.height<< " " << rect.width << endl;
}

*/