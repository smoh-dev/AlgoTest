//////////////////////////////////////////////////
// URL: https://www.acmicpc.net/
// Questions: https://www.acmicpc.net/problem/#####

//////////////////////////////////////////////////
// Q. 2798
//#include <iostream>
//#include <vector>
//using std::cout, std::cin;
//int main() {
//	int n = 0, m = 0;
//	cin >> n >> m;
//	int o = 0;
//	std::vector<int> cards;
//	for (int i = 0; i < n; i++) {
//		cin >> o;
//		cards.push_back(o);
//	}
//	int sum2 = 0, sum3 = 0, max = 0;
//	for (int i = 0; i < n - 2; i++) {
//		for (int j = i + 1; j < n - 1; j++) {
//			sum2 = cards[i] + cards[j];
//			if (sum2 > m) continue;
//			for (int k = j + 1; k < n; k++) {
//				sum3 = sum2 + cards[k];
//				if (sum3 > m) continue;
//				if (max < sum3) {
//					max = sum3;
//					if (max == m) break;
//				}
//			}
//			if (max == m) break;
//		}
//		if (max == m) break;
//	}
//	cout << max;
//}

//////////////////////////////////////////////////
// Q. 24313
//#include <iostream>
//using std::cout, std::cin;
//int main() {
//	int a1 = 0, a0 = 0, c = 0, n0 = 0;
//	cin >> a1 >> a0 >> c >> n0;
//	bool result = (a1 * n0 + a0 <= c * n0) && (a1 <= c);
//	cout << result;
//}

//////////////////////////////////////////////////
// Q. 24267
//#include <iostream>
//using std::cout, std::cin;
//int main() {
//	long long n = 0;
//	cin >> n;
//	cout << n * (n - 1) * (n - 2) / 3 / 2 << "\n" << 3;
//}

//////////////////////////////////////////////////
// Q. 24266
//#include <iostream>
//using std::cout, std::cin;
//int main() {
//	long long n = 0;
//	cin >> n;
//	cout << n * n * n << "\n" << 3;
//}

//////////////////////////////////////////////////
// Q. 24265
//#include <iostream>
//using std::cout, std::cin;
//int main() {
//	long long n = 0;
//	cin >> n;
//	cout << ((n * (n - 1)) / 2) << "\n" << 2;
//}

//////////////////////////////////////////////////
// Q. 24264
//#include <iostream>
//#include <cmath>
//using std::cout, std::cin;
//int main() {
//	int n = 0;
//	cin >> n;
//	long long result = pow(n, 2);
//	cout << result << "\n" << 2;
//}

//////////////////////////////////////////////////
// Q. 24263
//#include <iostream>
//using std::cout, std::cin;
//int main() {
//	int n = 0;
//	cin >> n;
//	cout << n << "\n" << 1;
//}

//////////////////////////////////////////////////
// Q. 24262
//#include <iostream>
//#include <cmath>
//using std::cout, std::cin;
//int main() {
//	int n = 0;
//	cin >> n;
//	cout << 1 << "\n" << 0;
//}

//////////////////////////////////////////////////
// Q. 25206
//#include <iostream>
//#include <vector>
//#include <sstream>
//using std::vector, std::string, std::stringstream;
//vector<string> Split(string input, char delim) {
//	vector<string> result;
//	stringstream ss(input);
//	string word;
//	while (getline(ss, word, delim)) {
//		result.push_back(word);
//	}
//	return result;
//}
//float GetGrade(string input) {
//	if (input == "A+") return 4.5f;
//	else if (input == "A0") return 4.0f;
//	else if (input == "B+") return 3.5f;
//	else if (input == "B0") return 3.0f;
//	else if (input == "C+") return 2.5f;
//	else if (input == "C0") return 2.0f;
//	else if (input == "D+") return 1.5f;
//	else if (input == "D0") return 1.0f;
//	else if (input == "F") return 0.0f;
//	else return -1.0f;
//}
//using std::cout, std::cin;
//int main() {
//	string input = "";
//	vector<string> courseInfo; courseInfo.clear();
//	float credit = 0.0f, totalCredit = 0.0f, grade = 0.0f, totalGrade = 0.0f;
//	while (std::getline(cin, input)) {
//		if (input == "") break;
//		courseInfo = Split(input, ' ');
//		grade = GetGrade(courseInfo[2]);
//		if (grade >= 0.0f) {
//			credit = std::stof(courseInfo[1]);
//			totalCredit += credit;
//			totalGrade += grade * credit;
//		}
//	}
//	cout << float(totalGrade / totalCredit);
//}

//////////////////////////////////////////////////
// Q. 1316
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using std::cout, std::cin, std::string;
//#include<vector>
//int main() {
//	int n = 0, result = 0;
//	cin >> n;
//	std::vector<char> chars;
//	string word = "";
//	char prevChar = 0;
//	bool isSame = false;
//	for (int i = 0; i < n; i++) {
//		cin >> word;
//		for (int j = 0; j < word.length(); j++) {
//			if (prevChar != word[j]) {
//				auto it = std::find(chars.begin(), chars.end(), word[j]);
//				if (it == chars.end()) {
//					prevChar = word[j];
//					chars.push_back(word[j]);
//				}
//				else {
//					isSame = true;
//					break;
//				}
//			}
//		}
//		if (!isSame) {
//			result++;
//		}
//		prevChar = 0;
//		isSame = false;
//		chars.clear();
//	}
//	cout << result;
//}


//////////////////////////////////////////////////
// Q. 2941
//#include <iostream>
//#include <vector>
//using std::cout, std::cin, std::string;
//int main() {
//	std::vector<string> croaChars = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
//	string s;
//	cin >> s;
//	int count = 0, length = 0, idx;
//	for (auto const& elem : croaChars) {
//		while ((idx = s.find(elem, 0)) != std::string::npos)
//		{
//			s.replace(s.begin() + idx, s.begin() + idx + elem.size(), "a");
//		}
//	}
//	cout << s.length();
//}


//////////////////////////////////////////////////
// Q. 1157
//#include <iostream>
//#include <map>
//using std::cout, std::cin, std::string;
//int main() {
//	string s;
//	cin >> s;
//	std::map<char, int> count;
//	for (auto& c : s) {
//		c = toupper(c);
//		auto result = count.insert(std::pair<char, int>(c, 1));
//		if (!result.second) {
//			count[c] = count[c] + 1;
//		}
//	}
//	int max = -1;
//	char maxChar = ' ';
//	bool isDup = false;
//	for (auto const& elem : count) {
//		if (elem.second > max) {
//			max = elem.second;
//			maxChar = elem.first;
//			isDup = false;
//		}
//		else if (elem.second == max) {
//			isDup = true;
//		}
//	}
//	if (isDup) cout << "?";
//	else cout << maxChar;
//}


//////////////////////////////////////////////////
// Q. 10988
//#include<iostream>
//#include<algorithm>
//using std::cout, std::cin, std::string;
//int main() {
//	string s, s2;
//	cin >> s;
//	s2 = s;
//	std::reverse(s.begin(), s.end());
//	if (s == s2) cout << 1;
//	else cout << 0;
//}

//////////////////////////////////////////////////
// Q. 2444
//#include<iostream>
//using std::cout, std::cin;
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n - i; j++) {
//			cout << " ";
//		}
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			cout << "*";
//		}
//		cout << std::endl;
//	}
//	for (int i = n - 1; i >= 1; i--) {
//		for (int j = 1; j <= n - i; j++) {
//			cout << " ";
//		}
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			cout << "*";
//		}
//		cout << std::endl;
//	}
//}


//////////////////////////////////////////////////
// Q. 3003
//#include<iostream>
//#include<vector>
//using std::cout, std::cin;
//int main() {
//	std::vector<int> answer = { 1, 1, 2, 2, 2, 8 };
//	int n;
//	std::vector<int> inputs;
//	while ((cin >> n))
//	{
//		inputs.push_back(n);
//		if (inputs.size() >= 6) break;
//	}
//	for (int i = 0; i < inputs.size(); i++)
//		cout << answer[i] - inputs[i] << " ";
//}

//////////////////////////////////////////////////
// Q. 25083
//#include<iostream>
//using std::cout;
//int main() {
//	cout << "         ,r'\"7\n";
//	cout << "r`-_   ,'  ,/\n";
//	cout << " \\. \". L_r'\n";
//	cout << "   `~\\/\n";
//	cout << "      |\n";
//	cout << "      |\n";
//}

//////////////////////////////////////////////////
// Q. 5622
//#include<iostream>
//#include<sstream>
//using namespace std;
//int main() {
//	string input = "";
//	while (getline(cin, input)) {
//		if (input == "") break;
//		cout << input << endl;
//	}
//}

//////////////////////////////////////////////////
// Q. 5622
//#include <iostream>
//#include <string>
//#include <map>
//using std::cout, std::cin, std::string;
//int main()
//{
//	string s;
//	getline(cin, s);
//	std::map<char, int> dials;
//	int d, diff = 65, delay = 0;
//	for (int i = 65; i <= 90; i++) {
//		if (i == 83 || i == 90) diff++;
//		d = (i - diff) / 3 + 2;
//		dials.insert(std::pair<char, int>((char)i, d));
//	}
//	for (char const& elem : s) {
//		delay += dials[elem] + 1;
//	}
//	cout << delay;
//}

//////////////////////////////////////////////////
// Q. 2908
//#include <vector>
//#include <sstream>
//using std::vector, std::string, std::stringstream;
//vector<string> Split(string input, char delim) {
//	vector<string> result;
//	stringstream ss(input);
//	string word;
//	while (getline(ss, word, delim)) {
//		result.push_back(word);
//	}
//	return result;
//}
//
//#include <iostream>
//#include <string>
//#include <algorithm>
//using std::cout, std::cin, std::string;
//int main()
//{
//	string s;
//	getline(cin, s);
//	vector<string> words = Split(s, ' ');
//	std::reverse(words[0].begin(), words[0].end());
//	std::reverse(words[1].begin(), words[1].end());
//	int a = std::stoi(words[0]);
//	int b = std::stoi(words[1]);
//	if (a > b) cout << a;
//	else cout << b;
//}

//////////////////////////////////////////////////
// Q. 1152
//#include <iostream>
//#include <vector>
//#include <sstream>
//using std::vector, std::string, std::stringstream;
//vector<string> Split(string s, char d) {
//	vector<string> result;
//	stringstream ss(s);
//	string word;
//	while (getline(ss, word, d)) {
//		result.push_back(word);
//	}
//	return result;
//}
//
//#include<algorithm>
//using std::string;
//string TrimLeft(string s) {
//	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char c) { return !std::isspace(c); }));
//	return s;
//}
//string TrimRight(string s) {
//	s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char c) { return !std::isspace(c); }).base(), s.end());
//	return s;
//}
//string Trim(string s) {
//	s = TrimLeft(s);
//	s = TrimRight(s);
//	return s;
//}
//
//using std::cout, std::cin;
//int main()
//{
//	string s;
//	getline(cin, s);
//	int pos = s.size() - 1;
//	s = Trim(s);
//	vector<string> words = Split(s, ' ');
//	cout << words.size();
//}

//////////////////////////////////////////////////
// Q. 2675
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, r;
//	string w;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> r >> w;
//		for (int j = 0; j < w.size(); j++) {
//			for (int k = 0; k < r; k++) {
//				cout << w[j];
//			}
//		}
//		cout << endl;
//	}
//}

//////////////////////////////////////////////////
// Q. 10809
//#include <iostream>
//#include <map>
//using namespace std;
//int main()
//{
//	string w;
//	map<char, int> alphas;
//	for (int i = 97; i <= 122; i++) {
//		alphas.insert(pair<char, int>((char)i, -1));
//	}
//	cin >> w;
//	for (int i = 0; i < w.size(); i++) {
//		if (alphas[w[i]] < 0) alphas[w[i]] = i;
//	}
//	for (const auto& elem : alphas) cout << elem.second << " ";
//}

//////////////////////////////////////////////////
// Q. 11654
//#include <iostream>
//using namespace std;
//int main()
//{
//	char c;
//	cin >> c;
//	cout << (int)c;
//}

//////////////////////////////////////////////////
// Q. 9086
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	string w;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> w;
//		cout << w[0] << w[w.size() - 1] << endl;
//	}
//}

//////////////////////////////////////////////////
// Q. 2743
//#include <iostream>
//using namespace std;
//int main()
//{
//	string w;
//	cin >> w;
//	cout << w.size();
//}

//////////////////////////////////////////////////
// Q. 27866
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	string w;
//	cin >> w >> n;
//	cout << w[n - 1];
//}

//////////////////////////////////////////////////
// Q. 1546
//#include <iostream>
//#include <vector>
//#include <numeric>
//using namespace std;
//int main()
//{
//	int n, a, max = -1;
//	float avg;
//	cin >> n;
//	vector<int> scores;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		scores.push_back(a);
//		if (max < a)
//			max = a;
//	}
//	avg = (float)(accumulate(scores.begin(), scores.end(), 0.0) / max * 100 / n);
//	cout << avg;
//}

//////////////////////////////////////////////////
// Q. 10811
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int m, n, a, b;
//	vector<int> baskets;
//	cin >> m >> n;
//	for (int i = 0; i < m; i++) {
//		baskets.push_back(i + 1);
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		if (a == b) continue;
//		auto start = baskets.begin();
//		reverse(start + (a - 1), start + b);
//	}
//	for (int i : baskets) cout << i << " ";
//}

//////////////////////////////////////////////////
// Q. 3052
//#include <iostream>
//#include <set>
//using namespace std;
//int main()
//{
//	int a;
//	set<int> remains;
//	for (int i = 0; i < 10; i++) {
//		cin >> a;
//		remains.insert(a % 42);
//	}
//	cout << remains.size() << endl;
//}

//////////////////////////////////////////////////
// Q. 5597
//#include <iostream>
//#include <map>
//using namespace std;
//int main()
//{
//	int id, min = 30, max = 0;
//	map<int, bool> hw;
//	for (int i = 0; i < 30; i++) {
//		hw.insert(pair<int, bool>(i, false));
//	}
//
//	for (int i = 0; i < 28; i++) {
//		cin >> id;
//		hw[id - 1] = true;
//	}
//	for (map<int, bool>::iterator it = hw.begin(); it != hw.end(); ++it) {
//		if (!it->second) {
//			if (it->first < min)
//				min = it->first + 1;
//			if (it->first > max)
//				max = it->first + 1;
//		}
//	}
//	cout << min << endl;
//	cout << max << endl;
//}

//////////////////////////////////////////////////
// Q. 10813
//#include <iostream>
//#include <deque>
//using namespace std;
//int main()
//{
//	int n, m, i, j, t;
//	cin >> n >> m;
//	deque<int> baskets(n);
//	for (int idx = 0; idx < n; idx++) {
//		baskets[idx] = idx + 1;
//	}
//	for (int idx = 0; idx < m; idx++) {
//		cin >> i >> j;
//		t = baskets[i - 1];
//		baskets[i - 1] = baskets[j - 1];
//		baskets[j - 1] = t;
//	}
//	for (int idx = 0; idx < n; idx++) {
//		cout << baskets[idx] << " ";
//	}
//}

//////////////////////////////////////////////////
// Q. 10810
//#include <iostream>
//#include <deque>
//using namespace std;
//int main()
//{
//	int n, m, i, j, k;
//	cin >> n >> m;
//	deque<int> baskets(n);
//	for (int idx = 0; idx < m; idx++) {
//		cin >> i >> j >> k;
//		for (int jdx = i; jdx <= j; jdx++) {
//			baskets[jdx - 1] = k;
//		}
//	}
//	for (int idx = 0; idx < n; idx++) {
//		cout << baskets[idx] << " ";
//	}
//}

//////////////////////////////////////////////////
// Q. 2562
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n = 9, a = 0, max = -1, idx = -1;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		if (max < a) {
//			max = a;
//			idx = i + 1;
//		}
//	}
//	cout << max << endl;
//	cout << idx << endl;
//}

//////////////////////////////////////////////////
// Q. 10818
//#include <iostream>
//#include <list>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int n = 0, a = 0;
//	cin >> n;
//	list<int> inputs;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		inputs.push_back(a);
//	}
//	inputs.sort();
//	cout << inputs.front() << " " << inputs.back();
//}

//////////////////////////////////////////////////
// Q. 10807
//#include <iostream>
//#include <list>
//using namespace std;
//int main()
//{
//	int n = 0, a = 0, b = 0, t = 0;
//	cin >> n;
//	list<int> inputs;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		inputs.push_back(a);
//	}
//	cin >> b;
//	for (list<int>::iterator it = inputs.begin(); it != inputs.end(); ++it) {
//		if (b == *it) t++;
//	}
//	cout << t;
//}

//////////////////////////////////////////////////
// Q. 10951
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0;
//	while (1) {
//		cin >> a >> b;
//		if (cin.eof()) break;
//		cout << a + b << endl;
//	}
//}

//////////////////////////////////////////////////
// Q. 10952
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0;
//	while (1) {
//		cin >> a >> b;
//		if (a == 0 && b == 0) break;
//		cout << a + b << endl;
//	}
//}

//////////////////////////////////////////////////
// Q. 11022
//#include <iostream>
//using namespace std;
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n, a, b;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << "\n";
//	}
//}

//////////////////////////////////////////////////
// Q. 11021
//#include <iostream>
//using namespace std;
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n, a, b;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		cout << "Case #" << i + 1 << ": " << a + b << "\n";
//	}
//}

//////////////////////////////////////////////////
// Q. 15552
//#include <iostream>
//using namespace std;
//int main()
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//	int n, a, b;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		cout << a + b << "\n";
//	}
//}

//////////////////////////////////////////////////
// Q. 25314
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n > 4) {
//		cout << "long ";
//		n -= 4;
//	}
//	cout << "long int";
//}

//////////////////////////////////////////////////
// Q. 25304
//#include <iostream>
//using namespace std;
//int main()
//{
//	int t, n, a, b;
//	cin >> t >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		t -= a * b;
//	}
//	if (t == 0)
//		cout << "Yes";
//	else
//		cout << "No";
//}

//////////////////////////////////////////////////
// Q. 10950
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n, a, b;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b;
//		cout << a + b << endl;
//	}
//}

//////////////////////////////////////////////////
// Q. 2480
//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	map<int, int> result;
//	result[a] = 1;
//	if (result.find(b) != result.end())
//		result[b]++;
//	else
//		result[b] = 1;
//	if (result.find(c) != result.end())
//		result[c]++;
//	else
//		result[c] = 1;
//	if (result[a] == 3)
//		cout << 10000 + a * 1000;
//	if (result[a] == 2)
//		cout << 1000 + a * 100;
//	else if (result[b] == 2)
//		cout << 1000 + b * 100;
//	else if (result[c] == 2)
//		cout << 1000 + c * 100;
//	if (result[a] == 1 && result[b] == 1 && result[c] == 1)
//		cout << max({ a, b, c }) * 100;
//}

////////////////////////////////////////////////////
//// Q. 2525
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	b += c;
//	while (b >= 60) {
//		b -= 60;
//		a++;
//	}
//	a %= 24;
//	cout << a << " " << b;
//}

//////////////////////////////////////////////////
// Q. 2884
//#include <iostream>
//using namespace std;
//int main()
//{
//	int h, m;
//	cin >> h >> m;
//	m -= 45;
//	if (m < 0) {
//		h--;
//		if (h < 0)
//			h += 24;
//		m += 60;
//	}
//	cout << h << " " << m;
//}

//////////////////////////////////////////////////
// Q. 14681
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x >> y;
//	if (x > 0 && y > 0)
//		cout << "1";
//	else if (x < 0 && y > 0)
//		cout << "2";
//	else if (x < 0 && y < 0)
//		cout << "3";
//	else if (x > 0 && y < 0)
//		cout << "4";
//}

//////////////////////////////////////////////////
// Q. 2753
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cin >> a ;
//	bool isLeap = false;
//	if (a % 400 != 0) {
//		if (a % 4 == 0) {
//			if (a % 100 != 0) {
//				isLeap = true;
//			}
//		}
//	}
//	else
//		isLeap = true;
//	cout << (isLeap) ? "1" : "0";
//}

//////////////////////////////////////////////////
// Q. 1330
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//		cout << ">";
//	else if (a < b)
//		cout << "<";
//	else
//		cout << "==";
//}

//////////////////////////////////////////////////
// Q. 10171
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "\\    /\\" << endl;;
//	cout << " )  ( ')" << endl;
//	cout << "(  /  )" << endl;
//	cout << " \\(__)|" << endl;
//}

//////////////////////////////////////////////////
// Q. 11382
//#include <iostream>
//using namespace std;
//int main()
//{
//	long a, b, c;
//	cin >> a >> b >> c;
//	cout << a + b + c;
//}

//////////////////////////////////////////////////
// Q. 2588
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int c = 0, sum = 0, n = 0;
//	do {
//		c = b % 10;
//		b -= c;
//		b /= 10;
//		cout << c * a << endl;
//		sum += c * a * pow(10, n);
//		n++;
//	} while (b > 0);
//	cout << sum;
//}

//////////////////////////////////////////////////
// Q. 10430
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a, b, c;
//    cin >> a >> b >> c;
//    cout << (a + b) % c << endl << ((a % c) + (b % c)) % c << endl << (a * b) % c << endl << ((a % c) * (b % c)) % c;
//}

//////////////////////////////////////////////////
// Q. 18108
//#include <iostream>
//int main()
//{
//    int year;
//    std::cin >> year;
//    int newYear = year - 543;
//    std::cout << newYear;
//}

//////////////////////////////////////////////////
// Q. 10926
//////////////////////////////////////////////////
//#include <iostream>
//int main()
//{
//    std::string name;
//    std::cin >> name;
//    std::cout << name << "??!";
//}


//////////////////////////////////////////////////