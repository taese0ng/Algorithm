#include <iostream>
#include <cmath>
using namespace std;

int answer=0;

bool possibility(int Q[], int N, int h){
    for(int i=0; i<h; ++i){
        if(Q[h]==Q[i] || h-i == abs(Q[h]-Q[i])) return false;
    }
    return true;
}


void Queen(int Q[], int N, int h=-1){
    if(possibility(Q, N, h)){
        if(h==N-1) answer++;
        for(int i=0; i<N; ++i){
            Q[h+1] = i;
            Queen(Q,N,h+1);
        }
    }
}

int main(void){
    int N;
    int Q[16];
    cin >> N;
    Queen(Q, N);
    cout << answer;
    return 0;
}
