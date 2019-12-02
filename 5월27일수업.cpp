#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	virtual int getHP() {
		return 100;
	}
	virtual ~Car() {
		cout << "이게 뭐야";
	}
};

class SportCar : public Car {
public:
	int getHP() {
		return 300;
	}
	~SportCar() {
		cout << "이게뭐야2";
	}
};

int main() {
	Car *p = new SportCar;
	p->getHP();
	cout << p->getHP() << endl;
	return 0;
}
/*
#include <iostream>
#include <string>

using namespace std;
class Employee {
	int rrn;

protected:
	int salary;
public:
	Employee();
	~Employee();
	string name;
	void setSalary(int salary);
	int getSalary();
};

void Employee::setSalary(int salary) {
	this->salary = salary;
}
int Employee::getSalary() {
	return salary;
}
Employee::Employee() {
	cout << rrn << endl;
}
Employee::~Employee() {
	salary = NULL;
}
class Manager : public Employee {
	int bonus;
public:
	Manager(int b = 0) : bonus(b){
		cout << b;
	}
	~Manager();
	void modify(int s, int b);
	void display();
};
Manager::~Manager() {
	bonus = NULL;
}
void Manager::modify(int s, int b) {
	salary = s;
	bonus = b;
}

void Manager::display() {
	cout << "봉급 : " << salary << "보너스 : " << bonus << endl;
	//cout << "주민등록번호 : " <<rrn << endl; 부모클래스의 전용멤버는 사용할수 없음!
}

int main() {
	Manager m;
	m.setSalary(2000);
	m.display();
	m.modify(1000, 500);
	m.display();
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;

	void setGear(int newGear) {
		gear = newGear;
	}
	void speedUp(int increment) {
		speed += increment;
	}
	void speedDown(int decrement) {
		speed -= decrement;
	}
};

class SportCar : public Car {
	bool turbo;
public:
	void setTurbo(bool newValue) {
		turbo = newValue;
	}
};

int main() {
	SportCar c;
	c.color = "Red";
	c.setGear(3);
	c.speedUp(100);
	c.speedDown(30);
	c.setTurbo(true);
	return 0;
}
*/
/*
#include <iostream>
#include <assert.h>
using namespace std;

class MyArray {
	friend ostream& operator <<(ostream &, const MyArray &);
private:
	int* data;
	int size;

public:
	MyArray(int size = 10);
	~MyArray();

	int getSize() const;
	MyArray& operator=(const MyArray &a);
	int& operator[](int i);
};

MyArray::MyArray(int s) {
	size = (s > 0 ? s : 10);
	data = new int[size];
	
	for (int i = 0; i < size; i++) {
		data[i] = 0;
	}
}
MyArray::~MyArray() {
	delete[] data;
	data = NULL;
}
MyArray& MyArray::operator=(const MyArray& a){
	if (&a != this) {
		delete[] data;
		size = a.size;
		data = new int[size];

		for (int i = 0; i < size; i++) {
			data[i] = a.data[i];
		}
	}
	return *this;
}

int MyArray::getSize() const {
	return size;
}

int& MyArray::operator[](int index) {
	assert(0 <= index && index < size);
	return data[index];
}

ostream& operator << (ostream &output, const MyArray &a) {
	int i;
	for (i = 0; i < a.size; i++) {
		output << a.data[i] << ' ';
	}
	output << endl;
	return output;
}

int main() {
	MyArray a1(10);

	a1[0] = 1;
	a1[1] = 2;
	a1[2] = 3;
	a1[3] = 4;
	cout << a1;

	return 0;
}
*/