#include <iostream>
#include <stdio.h>


using namespace std;

int main() {
	int ch;
	char letter;
	while (1) {
		ch = getchar();
		cin >> letter;
		if (letter == 72) {
			cout << endl << "Up" << endl;
		}
		else {
			cout << "Not arrow" << endl;
		}
		//cout << "Letter is " << letter << endl;
	}
	return 0;
}