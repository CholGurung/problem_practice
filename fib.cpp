#include <iostream>
using namespace std;

int fib(int i) {
	if (i == 0) {return 0;}
	if (i == 1) {return 1;}
	return fib(i - 1) + fib(i - 2);
}

int fib2(int n) {
	return fib2(n, new int[n + 1]);
}

int fib2(int i, int[] memo) {
	if (i == 0 || i == 1) {return i;}

	if (memo[i] == 0) {
		memo[i] = fib2(i - 1, memo) + fib2(i - 2, memo);
	}
	return memo[i];
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Fib number at " << num << "th place is " << fib(num) << endl << "Method 1" << endl;
	cout << "Fib number at " << num << "th place is " << fib2(num) << endl << "Method 2" << endl;

	return 0;
}