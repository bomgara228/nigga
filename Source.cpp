#include <iostream>
using namespace std;
int main() {
	//4
	/*
	int  b = 1,k;
	cin >> k;
	for (int i = b; i <= 10; i++) {
		cout << k * i << ' ';
	}*/

	//1
	/*
	for (int i = 10; i < 100; i++) {
		if (i % 5 == 0) {
			cout << i << ' ';
		}
	}*/
	//3
	/*
	int a,b=0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		b += i;
	}
	cout << b;*/

	//2
	int a, b, k;
	cin >> a >> b >> k;
	for (int i = a; i+k <= b; ) {
		cout << i << ' ';
		i += k;
	}

}