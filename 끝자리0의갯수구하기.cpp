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
		while (k % 2 == 0) { //k�� 2�� ���μ� ���� �Ѵ�
			k = k / 2;
			countNum1++; //2�� ���� Ƚ���� ����
		}
		while (k % 5 == 0) { //k�� 5�� ���μ������Ѵ�
			k = k / 5;
			countNum2++;//5�� ���� Ƚ���� ����
		}
		n--; //nȸ��ŭ �Է¹޴°Ŵϱ� while���� ���ش�
	}

	if (countNum1 <= countNum2) {//2�� ������ 5�� �������� �۰ų� ������
		answer = countNum1; //2�� ������ ��
	}
	else { //5�� ������ 2�� �������� �۰ų� ������
		answer = countNum2; //5�� ������ ��
	}
	return answer;
}
