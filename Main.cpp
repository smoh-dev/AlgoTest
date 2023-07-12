//////////////////////////////////////////////////
// Q. 2798
#include <iostream>
#include <vector>
using std::cout, std::cin;
int main() {
	int n = 0, m = 0;
	cin >> n >> m;
	int o = 0;
	std::vector<int> cards;
	for (int i = 0; i < n; i++)	{
		cin >> o;
		cards.push_back(o);
	}
	int sum2 = 0, sum3 = 0, max = 0;
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			sum2 = cards[i] + cards[j];
			if (sum2 > m) continue;
			for (int k = j + 1; k < n; k++) {
				sum3 = sum2 + cards[k];
				if (sum3 > m) continue;
				if (max < sum3) {
					max = sum3;
					if (max == m) break;
				}
			}
			if (max == m) break;
		}
		if (max == m) break;
	}
	cout << max;
}