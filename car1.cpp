#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int speed;
	int gear;
	string color;

	void speedUp() {
		speed += 10;
	}
	void speedDown() {
		speed -= 10;
	}
};

Car globalCar;
int main1333322321132() {
	Car localCar;

	globalCar.speed = 100;
	localCar.speed = 60;
	localCar.color = "white";
	cout << "현재 global 차의 속도는 " << globalCar.speed << endl;
	cout << "현재 local 차의 속도는 " << localCar.speed << endl;
	return 0;
}