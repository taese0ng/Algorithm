#include <iostream>
#include <vector>

using namespace std;

long long solution(int N){
    long long answer = 0;

    vector<long long> vec(N+1);
    for(int i=2; i<=N; ++i){
        vec[i] = i;
    }
    
    for(int i=2; i<=N; ++i){
        if(vec[i] == 0)
            continue;
        for(int l=i+i; l<=N; l+=i){
            vec[l] = 0;
        }
        if(vec[i])
            answer += vec[i];
    }
    return answer;
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long ans;
    int N;
    cin >> N;
    ans = solution(N);
    cout << ans;
    return 0;
}
