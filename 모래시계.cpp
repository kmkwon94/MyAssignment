#include <iostream>
using namespace std;
void sandClock(int k);
int main122222222222222()
{
	int k;
	int t;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> k;
		sandClock(k);
	}
	return 0;
}

void sandClock(int k)
{
	for (int i = 0; i < (k - 1) / 2; i++)
	{
		for (int minus = 0; minus < i; minus++) {
			cout << '-';
		}
		for (int j = 0; j < k - 2 * i; j++)
		{
			if (j % 2 == 1) {
				cout << '+';
			}
			else {
				cout << '*';
			}
		}
		for (int minus = 0; minus < i; minus++) {
			cout << '-';
		}
		cout << endl;
	}
	for (int i = 0; i < k; i++)
	{
		if (i == (k - 1) / 2) {
			cout << '*';
		}
		else {
			cout << '-';
		}
	}
	cout << endl;
	for (int i = (k - 1) / 2; i > 0; i--)
	{
		for (int minus = i - 1; minus > 0; minus--) {
			cout << '-';
		}
		for (int j = k - 2 * (i - 1); j > 0; j--)
		{
			if (j % 2 == 1) {
				cout << '*';
			}
			else {
				cout << '+';
			}
		}
		for (int minus = i - 1; minus > 0; minus--) {
			cout << '-';
		}
		cout << endl;

	}

}