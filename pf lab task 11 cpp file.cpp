#include<iostream>
using namespace std;
int main()
{
	float r1, r2, r3, r4, r5;
	cout << "enter r1 rate movie 1(out of 10)" << endl;
	cin >> r1;
	cout << "enter r2 rate movie 1(out of 10)" << endl;
	cin >> r2;
	cout << "enter r3 rate movie 1 (out of 10)" << endl;
	cin >> r3;
	cout << "enter r4 rate movie 1 (out of 10)" << endl;
	cin >> r4;
	cout << "enter r5 rate movie 1(out of 10)" << endl;
	cin >> r5;

	float average = (r1 + r2 + r3 + r4 + r5) / 5;

	cout << "average rate of movie " << average << endl;

	return 0;
}