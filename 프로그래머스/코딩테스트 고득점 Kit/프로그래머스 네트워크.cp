#include <string>
#include <vector>
#include <iostream>

using namespace std;

int visit[201];

void DFS(int n, vector<vector<int>> computers, int start){
    visit[start]=1;
    for(int i=0; i<n; ++i){
        if(!visit[i] && computers[start][i]){
            DFS(n, computers, i);
        }
    }
    
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for(int i=0; i<n; ++i){
        if(!visit[i]){
            answer++;
            DFS(n, computers, i);
        }
    }
    return answer;
}

int main(void){
    vector<vector<int>> computers = {{1,1,0},{1,1,0},{0,0,1}};
    
    cout << solution(3, computers) << endl;
    return 0;
}
