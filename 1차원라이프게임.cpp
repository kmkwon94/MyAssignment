#include <iostream>
using namespace std;
void lifegame(int size, int time);
int main123322444122202020() {
	int t = 0;
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		int size = 0;
		int time = 0;
		cin >> size >> time;
		lifegame(size, time);
	}
	return 0;
}
void lifegame(int size, int time) {
	int *p = new int[size];
	
	int bacteria = 0;
	for (int i = 0; i < size; i++) {
		cin >> bacteria;
		*(p + i) = bacteria;
	}

	while(time > 0){
		int i = 0;
		int *p2 = new int[size];
		for (i = 0; i < size; i++) {
			if (i == 0) {// 이웃하는 항이 오른쪽
				if (*(p + i + 1) < 3 || *(p + i + 1) > 7) { //rule 1 & 2
					if (*(p + i) == 0) {
						*(p2 + i) = *(p + i);
					}
					else {
						*(p2 + i) = *(p + i) - 1;
					}
				}
				else if (*(p + i + 1) > 3 && *(p + i + 1) < 8) { //rule 3
					if (*(p + i) == 9) {
						*(p2 + i) = *(p + i);
					}
					else { 
						*(p2 + i) = *(p + i) + 1;
					}
				}
				else { //rule 4
					*(p2 + i) = *(p + i);
				}
			}
			else if (i > 0 && i < size - 1) { //이웃하는 항이 왼쪽과 오른쪽
				if (*(p + i - 1) + *(p + i + 1) < 3 || *(p + i - 1) + *(p + i + 1) > 7) {//rule 1 & 2
					if (*(p + i) == 0) {
						*(p2 + i) = *(p + i);
					}
					else {
						*(p2 + i) = *(p + i) - 1;
					}
				}
				else if (*(p + i - 1) + *(p + i + 1) > 3 && *(p + i - 1) + *(p + i + 1) < 8) { //rule3
					if (*(p + i) == 9) {
						*(p2 + i) = *(p + i);
					}
					else {
						*(p2 + i) = *(p + i) + 1;
					}
				}
				else { //rule4
					*(p2 + i) = *(p + i);
				}
			}
			else {//이웃하는 항이 왼쪽
				if (*(p + i - 1) < 3 || *(p + i - 1) > 7) { //rule 1 & 2
					if (*(p + i) == 0) {
						*(p2 + i) = *(p + i);
					}
					else {
						*(p2 + i) = *(p + i) - 1;
					}
				}
				else if (*(p + i - 1) > 3 && *(p + i - 1) < 8) { //rule 3
					if (*(p + i) == 9) {
						*(p2 + i) = *(p + i);
					}
					else {
						*(p2 + i) = *(p + i) + 1;
					}
				}
				else { //rule 4
					*(p2 + i) = *(p + i);
				}
			}
		}//for문
		time--;
		p = p2;
		
	}//while 
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl;
	
}//함수 
