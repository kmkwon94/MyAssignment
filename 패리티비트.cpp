#include <iostream>
#include <bitset>
using namespace std;

void parrityBit(unsigned int k);

int main11111122222333333333344444444() {
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int k = 0;
		cin >> k;
		parrityBit(k);
	}

	return 0;
}

void parrityBit(unsigned int k) {
	unsigned int binary = k;
	int count = 0;
	string bitString = bitset<32>(binary).to_string();
	char arr[32];
	copy(bitString.begin(), bitString.end(), arr);
	for (int i = 0; i < 32; i++) {
		if (arr[i] == '1') {
			count++;
		}
	}
	if (count % 2 == 1) {
		k = k + 2147483648;
	}
	else {
		k = k;
	}
	cout << " 홀수이면 1 짝수이면 0 = " << count << "그리고  = " << k <<endl;
}


//1000111011010000011010001000