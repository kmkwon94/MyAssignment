#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
	int id;

public:
	static int numberOfCars;
	Car(int s = 0, int g = 1, string c = "white") :speed(s), gear(g), color(c) {
		id = ++numberOfCars;
	}
	void display();
};
void Car::display() {
	cout << "속도 : " << speed << "기어 : " << gear << "색상 : " << color<< endl;
}
int Car::numberOfCars = 0;
int main3332211() {
	Car objArray[3] = {
		Car(0, 1, "white"),
		Car(0, 1, "red"),
		Car(0, 1, "blue")
	};
	for (int i = 0; i < 3; i++) {
		objArray[i].display();
	}
	return 0;
}
/*
#include <iostream>
#include <cstring>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
	int id;

public:
	static int numberOfCars;
	Car(int s = 0, int g = 1, string c = "white") :speed(s), gear(g), color(c) {
		id = ++numberOfCars;
	}
};
int Car::numberOfCars = 0;
int main() {
	Car c1;
	cout << Car::numberOfCars << endl;
	Car c2;
	cout << Car::numberOfCars << endl;

}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {

	}
	void display();
};

void Car::display() {
	cout << "속도: " << speed << "기어: " << gear << " 색상: " << color << endl;
}

void swapObjects(Car *p1, Car *p2) {
	Car tmp;
	tmp = *p1;
	*p1 =*p2;
	*p2 = tmp;
	p1->display();
	p2->display();
}

int main() {
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	swapObjects(&mine, &yours);
	mine.display();
	yours.display();

	return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c) {

	}
	void display();
};

void Car::display() {
	cout << "속도: " << speed << "기어: " << gear << " 색상: " << color << endl;
}

void swapObjects(Car c1, Car c2) {
	Car tmp;
	tmp = c1;
	c1 = c2;
	c2 = tmp;
	c1.display();
	c2.display();
}

int main() {
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	swapObjects(mine, yours);
	mine.display();
	yours.display();

	return 0;
}
*/
/*
#include <iostream>
#include <cstring>
using namespace std;
class Student {
	char *name;
	int number;
public:
	Student(const char *pn, int n) {
		name = new char[strlen(pn) + 1];

		strcpy(name, pn);
		number = n;
	}
	Student(Student& s) {
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
		number = s.number;
	}
	Student() {
		delete[] name;
	}

	char *getName() {
		return name;
	}
	int getNumber() {
		return number;
	}
};

void displayStudent(Student obj) {
	cout << "이름 : " << obj.getName() << endl;
	cout << "학번 : " << obj.getNumber() << endl;
}

int main() {
	Student s1("Park", 20100001);
	displayStudent(s1);
	return 0;
}
*/
/*
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
class Student {
	char *name;
	int number;
public:
	Student(const char *pn, int n) {
		name = new char[strlen(pn) + 1];

		strcpy(name, pn);
		number = n;
	}
	Student(Student& s) {
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
		number = s.number;
	}
	Student() {
		delete[] name;
	}

	char *getName() {
		return name;
	}
	int getNumber() {
		return number;
	}
};

void displayStudent(Student obj) {
	cout << "이름 : " << obj.getName() << endl;
	cout << "학번 : " << obj.getNumber() << endl;
}

int main() {
	Student s1("Park", 20100001);
	displayStudent(s1);
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

class MyString {
private:
	char *pBuf;

public:
	MyString(const char *s = NULL);
	MyString(MyString &s);
	~MyString();

	void print();
	int getSize();

};
MyString::MyString(const char *s) {
	if (s == NULL)
	{
		pBuf = new char[1];
		pBuf[0] = NULL;
	}
	else
	{
		pBuf = new char[::strlen(s) + 1];
		strcpy(pBuf, s);
	}
}
MyString::MyString(MyString &s)
{
	pBuf = new char[s.getSize() + 1];
	strcpy(pBuf, s.pBuf);
}
MyString::~MyString()
{
	if (pBuf)
		delete[] pBuf;
}
void MyString::print()
{
	cout << pBuf << endl;
}
int MyString::getSize()
{
	return strlen(pBuf);
}
int main() {
	MyString str1;
	MyString str2("Hello");
	MyString str3 = "World!";
	MyString str4(str3);
	str1.print();
	str2.print();
	str3.print();
	str4.print();
	return 0;
}
*/