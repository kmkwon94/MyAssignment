#include <iostream>
using namespace std;
int findZero(int n);
int main12345fidn() {
	int t = 0;
	int m = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {

		cin >> m;
		cout << findZero(m) << endl;

	}
	return 0;
}

int findZero(int n) {

	int k = 0;
	int countNum1 = 0;
	int countNum2 = 0;
	int answer = 0;

	while (n > 0) {
		cin >> k;
		while (k % 2 == 0) { //k를 2로 소인수 분해 한다
			k = k / 2;
			countNum1++; //2가 나온 횟수를 센다
		}
		while (k % 5 == 0) { //k를 5로 소인수분해한다
			k = k / 5;
			countNum2++;//5가 나온 횟수를 센다
		}
		n--; //n회만큼 입력받는거니까 while에서 빼준다
	}

	if (countNum1 <= countNum2) {//2의 개수가 5의 개수보다 작거나 같으면
		answer = countNum1; //2의 개수가 답
	}
	else { //5의 개수가 2의 개수보다 작거나 같으면
		answer = countNum2; //5의 개수가 답
	}
	return answer;
}
