#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string solution(string s){
    string answer = "";
    vector<int> v;
    v.push_back(stoi(s));
    for(int i=0; i<s.length(); ++i){
        if(s[i] == ' ')
            v.push_back(stoi(s.substr(i+1)));
    }
    sort(v.begin(), v.end());
    answer += to_string(v[0]) + " " + to_string(v[(int)v.size()-1]);
    return answer;
}

int main(void){
    string s = "-2 -5 -1";
    cout << solution(s) << endl;
    return 0;
}
