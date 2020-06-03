#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0; i<s.length(); ++i){
        if(s[i] == 20) answer += 20;
        else if(s[i] >= 97 && s[i] <= 122){
            if(s[i] + n > 122) s[i]-=26;
            s[i] += n;
        }
        else if(s[i] >= 65 && s[i] <= 90){
            if(s[i] + n > 90) s[i] -= 26;
            s[i]+=n;
        }
        answer+=s[i];
    }
    return answer;
}

int main(void){
    string s = "a B z";
    cout << solution(s, 25) << endl;
    return 0;
}
