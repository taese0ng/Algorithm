#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0, cnt=0;
	string a, b;

	for (int i = 0; i < (int)skill_trees.size(); ++i) {
		cnt = 0;
		for (int j = 1; j < (int)skill.length(); ++j) {
			a = skill_trees[i].find(skill[j - 1]);
			b = skill_trees[i].find(skill[j]);
			if (a > b) {
				cnt = 1;
				break;
			}
		}
		if (cnt != 0) continue;
		answer++;
	}

	return answer;
}

int main(void) {
	string skill = "CBD";
	vector<string> skill_trees;

	skill_trees.push_back("BACDE");
	skill_trees.push_back("CBADF");
	skill_trees.push_back("AECB");
	skill_trees.push_back("BDA");

	cout << solution(skill, skill_trees) << endl;

	return 0;
}