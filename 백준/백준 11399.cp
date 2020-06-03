#include <iostream>
#include <algorithm>

using namespace std;
int N, sum, answer;
int pi[1001];

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    for(int i=0; i<N; ++i){
        cin >> pi[i];
    }
    
    sort(pi+0, pi+N);
    
    for(int i=0; i<N; ++i){
        sum=0;
        for(int j=0; j<=i; ++j){
            sum += pi[j];
        }
        answer += sum;
    }
    
    cout << answer;
    return 0;
}
