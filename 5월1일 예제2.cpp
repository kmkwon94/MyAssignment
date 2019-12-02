#include <iostream>
using namespace std;

class Car {
public:
	int getSpeed();
	void setSpeed(int s);
	void honk();

private:
	int speed;
};

int Car::getSpeed() {
	return speed;
}

void Car::setSpeed(int s) {
	speed = s;
}

void Car::honk() {
	cout << "»§»§!" << endl;
}
int main2223113345552() {
	Car myCar;
	myCar.setSpeed(80);
	myCar.honk();
	cout << "ÇöÀç¼Óµµ´Â" << myCar.getSpeed() << endl;
	return 0;
}