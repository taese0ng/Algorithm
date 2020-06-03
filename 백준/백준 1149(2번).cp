#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000][3];
int dp[1000][3];

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cases;
    
    cout << "집의 개수를 입력하세요 : ";
    cin >> cases;
    
    for(int cc = 0; cc < cases; ++cc){
        cin >> arr[cc][0] >> arr[cc][1] >> arr[cc][2];
    }
    
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    
    for(int i=1; i<cases; ++i){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + arr[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + arr[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + arr[i][2];
    }
    
    cout << min(dp[cases-1][0], min(dp[cases-1][1], dp[cases-1][2]));
    
    return 0;
}
