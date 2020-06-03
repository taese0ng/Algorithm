#include <iostream>
#include <algorithm>

using namespace std;

int N, M, sum=0, temp=0, cnt=0;
int parent[1001];
struct abc{
    int a,b,c;
};
abc ans[100001];

bool abc_cmp(abc A, abc B){return A.c < B.c;}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    cin >> M;
    for(int i=0; i<N; ++i){
        parent[i] = i+1;
    }
    
    for(int i=0; i<M; ++i){
        cin >> ans[i].a >> ans[i].b >> ans[i].c;
    }
    sort(ans, ans+M, abc_cmp);
    
    for(int i=0; i<M; ++i){
        if(parent[ans[i].a-1] == parent[ans[i].b-1])
            continue;
        else if(parent[ans[i].a-1] > parent[ans[i].b-1]){
            temp = parent[ans[i].a-1];
            for(int j=0; j<N; ++j){
                if(parent[j] == temp)
                    parent[j] = parent[ans[i].b-1];
            }
        }
        else if(parent[ans[i].a-1] < parent[ans[i].b-1]){
            temp = parent[ans[i].b-1];
            for(int j=0; j<N; ++j){
                if(parent[j] == temp)
                    parent[j] = parent[ans[i].a-1];
            }
        }
        sum += ans[i].c;
        ++cnt;
        if(cnt == N-1)
            break;
    }
    
    cout << sum;
    return 0;
}
