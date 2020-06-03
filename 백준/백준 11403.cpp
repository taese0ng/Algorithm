#include <iostream>

using namespace std;

int N;
int arr[101][101];

void dfs(int i, bool visit[]){
    for(int q=1; q<=N; ++q){
        if(arr[i][q] == 1 && !visit[q]){
            visit[q] = true;
            dfs(q, visit);
        }
    }
}

void printArr(bool visit[]){
    for(int i=1; i<=N; ++i){
        if(visit[i]) cout << "1 ";
        else cout << "0 ";
    }
    cout << endl;
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    for(int i=1; i<=N; ++i){
        for(int j=1; j<=N; ++j){
            cin >> arr[i][j];
        }
    }
    
    for(int i=1; i<=N; ++i){
        bool visit[101] = {false, };
        dfs(i, visit);
        printArr(visit);
    }
    
    return 0;
}
