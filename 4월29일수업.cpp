#include <iostream>
#include <string>
using namespace std;

int main1231444123312332() {
	string s1 = "This is a test";

	s1.insert(4, "Hello");
	cout << s1 << endl;
	int index = s1.find("test");
	cout << index << endl;
	s1.append("World");
	cout << s1 << endl;	
	string subject = "money";
	string other = " has no value if is not used";
	string sentence = subject + other;
	cout << sentence << endl;
	return 0;
}