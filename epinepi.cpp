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
		piArray[i - 2] = v1[i]; //�Էµ� ������ �� ����ֱ�.
	}

	//�عְŸ��� ���ϱ� ���� �Էµ� ������ int������ �ٲ� �� �񱳸� ���� temp �迭�� ����ִ´�.
	//�� �� piArray[i] �� temp[i]�� xor ���Ͽ� bitCount�� 1�̸� �װ͵��� �迭�� ����ִ´�.
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
			if (bitCountNumber== 1 && v1[0] == 3) {//Hamming distance�� 1�̸� �����ؾ� �� �͵�
				s = bitset<3>(piArray[i]).to_string();
				s1 = bitset<3>(temp[j]).to_string();
				for (int t = 0; t < 3; t++) {//���ڸ� ���ؼ� �����κ��� '-'�� ��ģ��
					if (s.at(t) == s1.at(t)) {
						nextString.at(t) = s.at(t);
					}
					else {
						nextString.at(t) = '-';
					}
				}
				//5��25�� ����� 23�� 44�б��� ���� �κ�.
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