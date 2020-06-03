#include <iostream>

using namespace std;

int n,t;
int dp[12];

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    cin >> t;
    for(int i=0; i<t; ++i){
        cin >> n;
        for(int j=4; j<=n; ++j){
            dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
        }
        cout << dp[n] << endl;
    }
    
    return 0;
}
