#include <iostream>
#include <string>

using namespace std;

string S;
int arr[26];
bool visit[26];

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<26; ++i){
        arr[i] = -1;
        visit[i] = false;
    }
    cin >> S;
    for(int i=0; i<S.length(); ++i){
        if(!visit[S[i]-97]) arr[S[i]-97]=i;
        visit[S[i]-97] = true;
    }
    
    for(int i=0; i<26; ++i){
        cout << arr[i] << " ";
    }
    //아스키코드 a=97;
    return 0;
}
