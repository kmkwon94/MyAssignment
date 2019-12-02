#include <iostream>
#include <string>
using namespace std;
class Employee {
	string name;
	int salary;
	int age;

	int getSalary() {
		return salary;
	}

public:
	int getAge() {
		return age;
	}
	string getName() {
		return name;
	}
};

int main122223312313333322123() {
	Employee e;
	//e.salary = 300;
	//e.getAge = 26;
	//int sa = e.getSalary();
	string s = e.getName();
	int a = e.getAge();
	return 0;
}