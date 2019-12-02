/*
#include <iostream>
#include <string>
#include <vector>
#include <bitset>
vector<string> solution(vector<int> input);
using namespace std;

vector<string> solution(vector<int> input) {
	vector<int> v1 = input;
	vector<string> v2 = {};

	int piArray[v1.size - 2];
	for (int i = 2; i < v1.size; i++) {
		piArray[i - 2] = v1[i]; //입력된 변수들 다 집어넣기.
	}

	//해밍거리를 구하기 위해 입력된 값들을 int형으로 바꾼 후 비교를 위해 temp 배열에 집어넣는다.
	//그 후 piArray[i] 와 temp[i]를 xor 비교하여 bitCount가 1이면 그것들을 배열에 집어넣는다.
	int temp[piArray.size] = {};
	for (int i = 0; i < piArray.size; i++) {
		temp[i] = piArray[i];
		int bitCountNumber = 0;
		vector<string> saveNextString = {};
		string nextString;
		string s;
		string s1;
		string s2;
		for (int j = 0; j < piArray.size; j++) {
			bitCountNumber = piArray[i] ^ temp[j];
			if (bitCountNumber== 1 && v1[0] == 3) {//Hamming distance가 1이면 수행해야 할 것들
				s = bitset<3>(piArray[i]).to_string();
				s1 = bitset<3>(temp[j]).to_string();
				for (int t = 0; t < 3; t++) {//숫자를 비교해서 같은부분을 '-'로 고친다
					if (s.at(t) == s1.at(t)) {
						nextString.at(t) = s.at(t);
					}
					else {
						nextString.at(t) = '-';
					}
				}
				//5월25일 토요일 23시 44분까지 만든 부분.
				 saveNextString= { nextString };
			}
			else if (bitCountNumber == 1 && v1[0] == 4) {
				s = bitset<4>(piArray[i]).to_string();
				s1 = bitset<4>(temp[j]).to_string();
				for (int t = 0; t < 4; t++) {
					if (s.at(t) == s1.at(t)) {
						nextString.at(t) = s.at(t);
					}
					else {
						nextString.at(t) = '2';
					}
				}
			}
		}
	}
	vector<string> answer;
	return answer;
}
*/