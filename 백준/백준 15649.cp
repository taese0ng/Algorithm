#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int N, M;
bool visit[10] = {false,};
vector<int> num;

void solution(){
    if(num.size() == M){
        for(int i=0; i<M; ++i){
            printf("%d ", num[i]);
        }
       printf("\n");
        return;
    }
    
    for(int i=1; i<=N; ++i){
        if(!visit[i]){
            visit[i] = true;
            num.push_back(i);
            solution();
            visit[i] = false;
            num.pop_back();
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    
    solution();
    
    return 0;
}
