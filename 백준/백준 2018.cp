#include <iostream>

using namespace std;

int N, cnt, sum, temp;

int main(void){
    cin >> N;
    
    for(int i=1; i<=N; ++i){
        for(int j=1; j<=N; ++j){
            if(N == (i*j + (j-1)*j/2)){
                cnt++;
                break;
            }
            else if(N < (i*j + (j-1)*j/2)) break;
        }
    }
    cout << cnt << endl;
    return 0;
}
