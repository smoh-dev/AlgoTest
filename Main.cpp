//////////////////////////////////////////////////
// Q. 2941
#include <iostream>
#include <vector>
using std::cout, std::cin, std::string;
int main() {
	std::vector<string> croaChars = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string s;
	cin >> s;
	int count = 0, length = 0, idx;
	for (auto const& elem : croaChars) {
		while ((idx = s.find(elem, 0)) != std::string::npos)
		{
			s.replace(s.begin() + idx, s.begin() + idx + elem.size(), "a");
		}
	}
	cout << s.length();
}
