#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main1231313132553333(){
	char string[80];

	strcpy(string, "Hello World from ");
	strcat(string, "strcpy() ");
	strcat(string, "and ");
	strcat(string, "strcat()!");
	cout << string << endl;

	return 0;
}
