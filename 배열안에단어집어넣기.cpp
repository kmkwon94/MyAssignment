#include <iostream>
using namespace std;

int main1231232155777() {
	char a[] = "Hello";
	char b[] = " Hi";
	char c[] = " World";

	char *str[] = {a,b,c};

	for (int i = 0; i < 3; i++) {
		cout << *(str+i);
	}
	
	return 0;
}