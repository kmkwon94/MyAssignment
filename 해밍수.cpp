#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
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
