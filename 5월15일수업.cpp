/*
#define _CRT_SECURE_NO_WARNINGS
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
	Student(Student &s) {
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
		number = s.number;
	}
	~Student() {
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
	cout << "�̸� : " << obj.getName() << endl;
	cout << "�й� : " << obj.getNumber() << endl;
}

int main333333333333() {
	Student s1("Park", 20100001);
	displayStudent(s1);
	return 0;
}

*/
/*
class Time {
private:
	int *hour, *minute, *second;

public:
	Time();
	Time(int h, int m, int s);

	void printTime();
	void setTime(int h, int m, int s);
	int getHour() { return *hour; }
	int getMinute() { return *minute; }
	int getSecond() { return *second; }
	void setHour(int h) { *hour = h; }
	void setMinute(int m) { *minute = m; }
	void setSecond(int s) { *second = s; }

	~Time();
};
Time::Time() {
	hour = new int();
	minute = new int();
	second = new int();

	*hour = *minute = *second = 0;

}

Time::Time(int h, int m, int s) {
	hour = new int();
	minute = new int();
	second = new int();
	*hour = h;
	*minute = m;
	*second = s;
}

void Time::setTime(int h, int m, int s) {
	*hour = h;
	*minute = m;
	*second = s;
}
void Time::printTime() {

	cout << "The time is : (" << *hour << ":" << *minute << ":" << *second << ")" << endl;
}

Time::~Time() {
	delete hour; delete minute; delete second;

}


void main() {
	Time *t;
	t = new Time(3, 55, 54);
	t->printTime();

	t->setHour(7);
	t->setMinute(17);
	t->setSecond(43);

	t->printTime();

	delete t;
}
*/

/*class Car {
	const int MAX_SPEED;
	int speed;

public:
	Car() : MAX_SPEED(300) {

	}
};
*/

/*#include <iostream>
#include <string>
using namespace std;
class Car {
	string &alias; //�̷��� ���°� ���� ������. 
	//�̷��� ���°� ���� ������. ��� ���������� ���� ������ �ֳ��ϸ� �ٸ� �긦 �����ϴ� ���۷��� �����ϱ� �׷��� ����������� ���������� ���� �� �ִ� �ָ� �����ϴ°� ����
	int speed;
public:
	Car(string s) : alias(s) {
		cout << alias << endl;
	}
};

int main() {
	Car c1("���� �ڵ���");
	return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {

	}
};
class Rectangle {
	Point p1, p2;
public:
	Rectangle(int x1, int y1, int x2, int y2) :p1(x1, y1), p2(x2, y2) {

	}
};*/