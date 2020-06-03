#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long  N,M, result, l, r;
long long  arr[1000001];

int main(void){
    cin >> N >> M;
    for(int i=0; i<N; ++i){
        cin >> arr[i];
        if(r < arr[i]) r = arr[i];
    }
    
    while(l<=r){
        long long mid = (r+l)/2;
        long long temp=0;
        for(int i=0; i<N; ++i){
            if(arr[i]-mid >=0)
                temp += arr[i]-mid;
        }
        if(temp >= M){
            if(mid > result) result = mid;
            l = mid+1;
        }
        else r=mid-1;
        
    }
    cout << result << endl;
    return 0;
}
