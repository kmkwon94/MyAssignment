/* inline 함수 사용법
class Car {
public:
	inline int getSpeed(); //여기에 inline 붙이고
	void setSpeed(int s);
	void honk();
private:
	int speed;
};

inline int Car::getSpeed() {//여기에도 inline 붙이면 된다.
	return speed;
}*/

