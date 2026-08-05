#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	bool AisOn = false;
	bool BisOn = false;
	cin >> N;
	vector <int> intrp(N);

	for (int i = 0; i < N; i++) {
		cin >> intrp[i];
		if (intrp[i] == 1) {
			AisOn = true;
		}
		else if (intrp[i] == 2) {
			bool hand;
			hand = BisOn;
			BisOn = AisOn;
			AisOn = hand;
		}
	}

	AisOn == true ? cout << 1 << endl : cout << 0 << endl;
	BisOn == true ? cout << 1 << endl : cout << 0 << endl;

	return 0;
}
