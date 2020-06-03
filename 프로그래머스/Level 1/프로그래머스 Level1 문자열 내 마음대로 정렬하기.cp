#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N;

bool string_cmp(string A, string B){
    if(A[N] == B[N]){
        return A < B;
    }
    else
        return A[N] < B[N];
}

vector<string> solution(vector<string> strings, int n){
    N=n;
    sort(strings.begin(), strings.end(), string_cmp);
    return strings;
}

int main(void){
    int n=1;
    vector<string> strings;
    strings.push_back("sun");
    strings.push_back("bed");
    strings.push_back("car");
    
    strings = solution(strings, n);
    
    for(int i=0; i<(int)strings.size(); i++){
        cout << strings[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
