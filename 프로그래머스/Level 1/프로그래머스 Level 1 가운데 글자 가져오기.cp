#include <string>
#include <iostream>

using namespace std;

string solution(string s){
    string answer = "";
    if(s.length()%2 == 0){
        answer = s[s.length()/2-1];
        answer += s[s.length()/2];
    }
    else{
        answer = s[s.length()/2];
    }
    return answer;
}

int main(void){
    string s = "qwerty";
    cout << solution(s) << endl;
    return 0;
}
