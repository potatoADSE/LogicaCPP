#include <iostream>
using namespace std;

int main() {
	int limite;
	cin >> limite;
	for (int i = 1; i  <= limite; i++) {
		if (i%2 == 0) {
			cout << i << endl;
		}
	}
	return 0;
}
