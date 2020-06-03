#include <iostream>
#include <vector>

using namespace std;

void solution(int temp[], vector<int> answer, int N, int term){
    if(answer.size() == 6){
        for(int i=0; i<6; ++i){
            cout << answer[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i=term; i<N; ++i){
        answer.push_back(temp[i]);
        solution(temp, answer, N, i+1);
        answer.pop_back();
    }
    
}
int main(void){
    int N=1, term=0;
    int temp[17];
    vector<int> answer;
    
    while(N!=0){
        cin >> N;
        for(int i=0; i<N; ++i){
            cin >> temp[i];
        }
        solution(temp, answer, N, term);
        cout << endl;
    }
    
    return 0;
}
