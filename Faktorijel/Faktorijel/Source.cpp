#include<iostream>
using namespace std;

int fakt(int a) {
	if (a == 1)
		return 1;
	else
		return a*fakt(a - 1);
}

void main() {
	int a = 0;
	cin >> a;
	cout << fakt(a);
	system("pause>0");
}