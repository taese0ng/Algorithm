#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;
	if (a < b) {
		while (a <= b) {
			answer += a;
			a++;
		}
	}
	else {
		while (b <= a) {
			answer += b;
			b++;
		}
	}
	return answer;
}

int main(void) {
	int a=3, b=5;
	cout << solution(a, b) << endl;
	system("pause");
	return 0;
}