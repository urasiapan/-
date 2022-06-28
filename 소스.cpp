#include <iostream>
using namespace std;
#include <algorithm>

void binarysearch(const int array[], const int& n, const int& k) {
	int first = 0;
	int last = n - 1;
	while (first <= last) {
		int mid = (first + last) / 2;
		if (array[mid] == k) {
			cout << "1\n";
			return;
		}
		else {
			if (array[mid] > k)
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	cout << "0\n";
	return;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int array[500001];
	int array2[500001];

	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> array2[i];
	}
	sort(array, array + n);
	for (int i = 0; i < m; i++) {
		binarysearch(array, n, array2[i]);
	}
	return 0;
}