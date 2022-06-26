#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, sum;
	cin >> n;
	int result = 0;

	for (int i = 1; i < 1000001; i++) {

		sum = i;
		int j = i;

		while (j != 0) {
			sum += j % 10;
			j /= 10;
		}

		if (sum == n) {
			result = i;
			break;
		}
	}

	cout << result;

	return 0;
}