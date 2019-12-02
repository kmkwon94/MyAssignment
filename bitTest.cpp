/*
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

	string cppstyle = "My name is Hyeon";

	char* cstyle = new char[cppstyle.size() + 1];

	// cppstyle의 문자열을 얻어서 복사한다.
	for (int i = 0; i < 10; i++) {
		strcpy_s(cstyle, cppstyle.size() + 1, cppstyle.c_str());

	}
	cout << "cstyle = " << cstyle<< endl;
	cout << "cppstyle = " << cppstyle << endl;

	delete[] cstyle;
	cstyle = NULL;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
	int num1 = 5;
	int num2 = 7;
	int num3 = num1 ^ num2;
	
	cout << num3 << endl;

	return 0;
}
*/