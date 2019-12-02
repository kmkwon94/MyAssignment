/*
#include <iostream>
using namespace std;
class Vector {
	friend ostream& operator<<(ostream& os, const Vector& v);
private:
	double x, y;
public:
	Vector(double x, double y) {
		this->x = x;
		this->y = y;
	}
	Vector operator+(const Vector& v2) const {
		Vector v(0.0, 0.0);
		v.x = this->x + v2.x;
		v.y = this->y + v2.y;
		return v;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;

	}
};
ostream& operator<<(ostream& os, const Vector& v) {
	os << "(" << v.x << "," << v.y << ")" << endl;
	return os;
}

int main() {
	Vector v1(1.0, 2.0), v2(3.0, 4.0);
	Vector v3 = v1 + v2;
	cout << v1 << v2 << v3;

	return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Vector {
	friend Vector operator+(const Vector& v1, const Vector& v2);
private:
	double x, y;
public:
	Vector(double x, double y) {
		this->x = x;
		this->y = y;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	Vector operator+(Vector& v2) { // C++ 스타일
		Vector v(0.0, 0.0);
		v.x = this->x + v2.x;
		v.y = this->y + v2.y;
		return v;
	}
};

int main() {
	Vector v1(1.0, 2.0), v2(3.0, 4.0);
	Vector v3 = v1 + v2;
	v3.display();

	return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Vector {
	friend Vector operator+(const Vector& v1, const Vector& v2);
private:
	double x, y;
public:
	Vector(double x, double y) {
		this->x = x;
		this->y = y;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	Vector operator+(Vector& v2) {
		Vector v(0.0, 0.0);
		v.x = this->x + v2.x;
		v.y = this->y + v2.y;
		return v;
	}
};


Vector operator+(const Vector& v1, const Vector& v2) {//이건 C 스타일
	Vector v(0.0, 0.0);
	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;
	return v;
}

int main() {
	Vector v1(1, 2), v2(3, 4);
	Vector v3 = v1 + v2;
	v3.display();

	return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Date {
	friend bool equals(Date d1, Date d2);
private:
	int year, month, day;
public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
};
bool equals(Date d1, Date d2) {
	return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}

int main() {
	Date d1(1960, 5, 23), d2(2002, 7, 23);
	cout << equals(d1, d2) << endl;
	

	
}
*/
/*
//프렌드 함수 예제 
#include <iostream>
#include <string>
using namespace std;

class Company {
private:
	int sales, profit;

	friend void sub(Company& c);
public:
	Company() :sales(0), profit(0) {
	}
};

void sub(Company& c) {
	c.profit = 10;
	cout << c.profit << endl;
}

int main() {
	Company c1;
	sub(c1);
	return 0;
}
*/