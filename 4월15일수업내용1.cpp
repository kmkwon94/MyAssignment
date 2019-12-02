#include <iostream>
using namespace std;
void CreateMem(int** ptr);
void Test(int *ptr);
int main12312312344(){

	int i = 10;
	Test(&i);
	cout << i << endl;
	int* ptr = NULL;
	ptr = &i;
	int** p = &ptr;
	CreateMem(p);
	for (int i = 0; i <= 9; i++) {

		cout << **(p+i)<< "test" << endl;

	}
	delete[] ptr;
	return 0;

}

void CreateMem(int** ptr) {//포인터는 항상 시작주소를 주자!
	int* p1 = new int[10];
	ptr = &p1;
	
	for (int i = 0; i <= 9; i++) {
		*(p1+i) = i;
	}

}

void Test(int *ptr) {
	*ptr = 30;
}