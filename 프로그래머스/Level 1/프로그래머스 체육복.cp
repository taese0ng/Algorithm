#include <iostream>
#include <vector>
#include <string>

using namespace std;

int student[51];

int solution(int n, vector<int> lost, vector<int> reserve){
    int answer = n - (int)lost.size();

    for(int i=0; i<(int)lost.size(); ++i){
        student[lost[i]]--;
    }
    
    for(int i=0; i<(int)reserve.size(); ++i){
        student[reserve[i]]++;
        if(student[reserve[i]]==0)
            answer++;
    }
    
    for(int i=0; i<(int)reserve.size(); ++i){
        if(student[reserve[i]] > 0 && student[reserve[i]-1] < 0){
            student[reserve[i]-1]++;
            answer++;
        }
        else if(student[reserve[i]] > 0 && student[reserve[i]+1] < 0){
            student[reserve[i]+1]++;
            answer++;
        }
    }
    
    return answer;
}

int main(void){
    int n = 5;
    vector<int> lost;
    vector<int> reserve;
    
    lost.push_back(2);
    lost.push_back(3);
    lost.push_back(4);
    
    reserve.push_back(1);
    reserve.push_back(3);
    reserve.push_back(5);
    
    cout << solution(n, lost, reserve) << endl;
    
    return 0;
}
