#include <iostream>
using namespace std;

int main1213aasd12() {
	int i = 0;
	int* ptr1 = &i;
	int** ptr2 = NULL;

	ptr2 = &ptr1;

	cout << *ptr1 << **ptr2 << endl;

	return 0;
}