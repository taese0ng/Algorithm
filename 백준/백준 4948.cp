#include <iostream>
#include <string>

using namespace std;

int arr[246914];
int n, answer;

void reset(){
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i<246914; ++i){
        arr[i]=0;
    }
}

void eratostenes(){
    for(int i=2; i<=2*n; ++i){
        for(int j=i+i; j<=2*n; j+=i){
            arr[j]=1;
        }
    }
}

void solution(){
    for(int i=n+1; i<=2*n; ++i){
        if(arr[i]==0) answer++;
    }
    cout << answer << endl;
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin >> n;
        if(n==0) break;
        answer=0;
        reset();
        eratostenes();
        solution();
    }
    return 0;
}
