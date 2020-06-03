#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool string_cmp(char A, char B) {
	return A > B;
}

string solution(string s) {
	string answer;
	char temp;
	int size = s.length();
	vector<char> vs;
	for (int i = 0; i < size; i++) {
		vs.push_back(s[i]);
	}
	
	sort(vs.begin(), vs.end(), string_cmp);
	for (int i = 0; i < (int)vs.size(); ++i) {
		answer += vs[i];
	}
	return answer;
}

int main(void) {
	string s = "Zbcdefg";
	cout << solution(s) << endl;
	system("pause");
	return 0;
}