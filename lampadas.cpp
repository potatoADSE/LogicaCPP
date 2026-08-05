#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	int AisOn = -3;
	int BisOn = -3;
	cin >> N;
	vector <int> intrp(N);

	for (int i = 0; i < N; i++) {
		cin >> intrp[i];
		if (intrp[i] == 1 && AisOn == 2) {
			AisOn = 3;
		}
		else if (intrp[i] == 1 && AisOn == 3) {
			AisOn = -3;
		}
		else if (intrp[i] == 2) {
			BisOn *= -1;
			AisOn *= -1;
		}
	}

	AisOn == 3 ? cout << 1 << endl : cout << 0 << endl;
	BisOn == 3 ? cout << 1 << endl : cout << 0 << endl;

	return 0;
}
