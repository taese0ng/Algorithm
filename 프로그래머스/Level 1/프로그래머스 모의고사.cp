#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> arr1 = {1,2,3,4,5};
vector<int> arr2 = {2,1,2,3,2,4,2,5};
vector<int> arr3 = {3,3,1,1,2,2,4,4,5,5};
vector<int> cnt(3);
int i, value;

int max(int a, int b){
    return a < b ? b : a;
}
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    for(i=0; i<answers.size(); ++i){
        if(arr1[i%arr1.size()] == answers[i]) cnt[0]++;
        if(arr2[i%arr2.size()] == answers[i]) cnt[1]++;
        if(arr3[i%arr3.size()] == answers[i]) cnt[2]++;
    }
    value = max(max(cnt[0], cnt[1]),cnt[2]);
    for(i=0; i<cnt.size(); i++){
        if(cnt[i] == value) answer.push_back(i+1);
    }
    return answer;
}

int main(void){
    vector<int> answers={1,3,2,4,2};
    vector<int> answer;
    answer = solution(answers);
    for(int i=0; i<answer.size(); ++i){
        cout << answer[i];
    }
    return 0;
}
