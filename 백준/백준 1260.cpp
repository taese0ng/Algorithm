#include <iostream>
#include <queue>

using namespace std;

int n,m,v,x,y;
bool visit[1001];
bool point[1001][1001];

void init(int n){
    for(int i=1; i<=n; ++i)
        visit[i] = false;
}

void dfs(int v){
    cout << v << " ";
    visit[v] = true;
    for(int i=1; i<=n; ++i){
        if(visit[i] || !point[v][i]) continue;
        dfs(i);
    }
}

void bfs(){
    int temp;
    queue<int> q;
    q.push(v);
    visit[v] = true;
    while(!q.empty()){
        temp = q.front();
        cout << temp << " ";
        q.pop();
        for(int i=1; i<=n; ++i){
            if(visit[i] || !point[temp][i]) continue;
            q.push(i);
            visit[i] = true;
        }
    }
}

int main(void){
    cin >> n >> m >> v;
    for(int i=0; i<m; ++i){
        cin >> x >> y;
        point[x][y] = point[y][x] = true;
    }
    dfs(v);
    cout << endl;
    init(n);
    bfs();
    return 0;
}
