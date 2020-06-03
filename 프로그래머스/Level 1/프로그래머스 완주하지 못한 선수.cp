#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool string_cmp(string A, string B){
    return A<B;
}

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end(), string_cmp);
    sort(completion.begin(), completion.end(), string_cmp);
    
    for(int i=0; i<participant.size(); ++i){
        if(participant[i] != completion[i]){
            answer = participant[i];
            break;
        }
    }
    return answer;
}

int main(void){
    vector<string> participant;
    vector<string> completion;
    string name;
    cout << "input participant : ";
    for(int i=0; i<4; i++){
        cin >> name;
        participant.push_back(name);
    }
    cout << "input completion : ";
    for(int i=0; i<3; i++){
        cin >> name;
        completion.push_back(name);
    }
    cout << solution(participant, completion);
    return 0;
}
