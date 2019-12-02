#include <iostream>
using namespace std;
void outputPyramid(int k);
int main123332223(void)
{
	int t;
	int k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> k;
		outputPyramid(k);
	}
	return 0;
}
void outputPyramid(int k)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= k; i++) {
		int s = i;
		for (j = 1; j <= 2*i - 1; j++) {
			if (j == 1) {
				cout << s;
			}
			else {
				if (j % 2 == 1) {
					s = s + k - (j - 1) / 2;
					cout << s;
				}
				else {
					cout << " ";
				}
			}
		}				
		cout << endl;
	}
}


