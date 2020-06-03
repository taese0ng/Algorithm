#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool stringcmp(string A, string B){
    return A+B>B+A;
}

string solution(vector<int> numbers){
    string answer = "";
    vector<string> stringnumbers;
    for(int i=0; i<(int)numbers.size(); ++i) stringnumbers.push_back(to_string(numbers[i]));
    sort(stringnumbers.begin(), stringnumbers.end(), stringcmp);
    for(int i=0; i<(int)stringnumbers.size(); ++i) answer += stringnumbers[i];
    if(answer[0] == '0') return "0";
    return answer;
}

int main(void){
    vector<int> numbers = {3,3,34,5,9};
    
    cout << solution(numbers) << endl;
    return 0;
}
