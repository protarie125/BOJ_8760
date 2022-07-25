#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int z;
	cin >> z;
	while (0 < (z--)) {
		int w, k;
		cin >> w >> k;

		if (0 == w % 2) {
			cout << (w / 2) * k;
		}
		else if (0 == k % 2) {
			cout << (k / 2) * w;
		}
		else {
			if (w < k) {
				cout << ((k - 1) / 2) * w + ((w - 1) / 2);
			}
			else {
				cout << ((w - 1) / 2) * k + ((k - 1) / 2);
			}
		}

		cout << '\n';
	}

	return 0;
}