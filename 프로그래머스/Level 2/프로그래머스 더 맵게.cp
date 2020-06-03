#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K){
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> temp; //오름차순으로 정렬되는 우선순위 큐
    for(int i=0; i<(int)scoville.size(); ++i) temp.push(scoville[i]);
    
    while(temp.top() < K){
        if(temp.size() == 1) return -1;
        ++answer;
        int x = temp.top();
        temp.pop();
        int y = temp.top();
        temp.pop();
        temp.push(x + y * 2);
    }
    return answer;
}

int main(void){
    vector<int> scoville = {1,2,3,9,10,12};
    int K = 7;
    
    cout << solution(scoville, K) << endl;
    
    return 0;
}
