#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main33333333322222222211111111()
{
	vector<int> H(1);
	H[0] = 1;
	int i = 0;
	while (H.size() < 1500)
	{
		H.push_back(2 * H[i]);
		H.push_back(3 * H[i]);
		H.push_back(5 * H[i]);//해밍수 벡터에 있는 숫자의 2,3,5배의숫자를 벡터에 넣는다.

		sort(H.begin(), H.end());//정렬
		vector<int>::iterator it;
		it = unique(H.begin(), H.end());//중복제거
		H.erase(it, H.end());//중복제거후 빈 인덱스를 처리한다.
		i++;
	}
	int t;
	cin >> t;
	for (int s = 0; s < t; s++)
	{
		int k = 0;
		cin >> k;
		cout << H[k - 1] << endl;
	}

	return 0;
}
/*
#include <iostream>
using namespace std;

//void hammingNum(int k);
void isHammingNum();
int main132222213131313131222() {
	int t = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int k = 0;
		cin >> k;
		isHammingNum();

	}
	return 0;
}

void isHammingNum() {
	int hammingNum = 0;
	int number = 0;
	int arr[1351];
	int arr2[1351];
	for (number = 1; number < 20; number++) {
		int i = number;

		if (number % 7 == 0) {
			hammingNum = 0;
		}
		else {
			if (number == 1) {
				hammingNum = 1;
			}
			else if (number % 2 == 0) {
				hammingNum = 1;
			}
			else if (number % 3 == 0) {
				hammingNum = 1;
			}
			else if (number % 5 == 0) {
				hammingNum = 1;
			}
			else {
				hammingNum = 0;
			}
		}
		
		if (hammingNum == 1) {
			arr[i] = number;
		}
		else {
			arr[i] = 0;
		}
		if (arr[i] != 0) {
			int q = 1;
			for (q = 1; q < 20; q++) {
				arr2[q] = arr[i];
				cout << q << " 는" << arr2[q] << endl;

			}
		}
	}
	/*	int arr3[1351];
	for (int j = 1; j < 100; j++) {
		arr3[j] = arr2[j];
		cout << j << " 는" << arr3[j] << endl;
	}
	

}
*/
/*
void hammingNum(int k) {
	
	int arr[1350];
	int i = 1;
	int j = 1;
	for (int p = 0; p < 500; p++) {
		while (i == 1 || i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
			arr[j] = i;
			j++;
			i++;
			i < 1350;
			j < 1350;
		}
		i++;
	}
	
	int t = 0;
	cin >> t;
	for(int i = 0; i < t; i++ ){
		int input = 0;
		cin >> input;
		cout << "arr["<< input << "] " << "의 값은 = " << arr[input] << endl;
	}
	/*
	int answer = 0;
	int *ptr = arr;
	
	answer = *(ptr + (k-1));
	//cout << "정답은 = " << answer << endl;

}
*/