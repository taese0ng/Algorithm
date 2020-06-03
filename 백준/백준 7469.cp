#include <iostream>
#include <algorithm>

using namespace std;

pair<int,int> arr[100001];
int N=0, Q=0, i=0, j=0, k=0;

void find(int i, int j, int k){
    int cnt=0;
    for(int w=0; w<N; ++w){
        if(i<=arr[w].second && arr[w].second<=j)
            ++cnt;
        if(cnt==k){
            cout << arr[w].first << endl;
            break;
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cout << "숫자의 크기와 함수호출 횟수를 적으시오 : " << endl;
    cin >> N >> Q;
    
    for(int w=0; w<N; ++w){
        cin >> arr[w].first;
        arr[w].second = w+1;
    }
    sort(arr, arr+N);
    for(int w=0; w<Q; ++w){
        cin >> i >> j >> k;
        find(i,j,k);
    }
    
    return 0;
}
