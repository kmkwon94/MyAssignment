#include <iostream>
using namespace std;
enum RCODE { SUCCESS, ERROR };
RCODE get_line_parameter(int x1, int y1, int x2, int y2, float &slope, float &yintercept);
int main1213213567744332()
{
	float s, y;
	if (get_line_parameter(3, 3, 6, 6, s, y) == ERROR)
		cout << "����" << endl;
	else
		cout << "����� " << s << endl << "y������ " << y << endl;
	return 0;
}
RCODE get_line_parameter(int x1, int y1, int x2, int y2, float &slope, float &yintercept)
{
	if (x1 == x2)
		return ERROR;
	else
	{
		slope = (float)(y2 - y1) / (float)(x2 - x1);
		yintercept = y1 - slope * x1;
		return SUCCESS;
	}
}