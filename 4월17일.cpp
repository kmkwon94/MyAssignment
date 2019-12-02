#include <iostream>
using namespace std;
int *add(int x, int y);
int main1231312() {
	
	int *re = add(10, 20);
	cout << *re << endl;
	/*
	int i = 10;
	int &t = i;
		
	cout << i << t << endl;
	*/
	return 0;
}

int *add(int x, int y) {
	int *result = new int();

	*result = x + y;
	return result;
}