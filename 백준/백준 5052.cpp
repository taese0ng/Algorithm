#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int mainN, subN, i, j, t, q, cnt;
string num[10001];

int main(void){
    
    cin >> mainN;
    for(i=0; i<mainN; ++i){
        cin >> subN;
        for(j=0; j<subN; ++j){
            cin >> num[j];
        }
        sort(num+0, num+subN);
        for(t=0; t<subN-1; ++t){
            cnt=0;
            for(q=0; q<num[t].length(); ++q){
                if(num[t+1][q] == num[t][q]) cnt++;
            }
            if(cnt==num[t].length()){
                cout << "NO" << endl;
                cnt=-1;
                break;
            }
        }
        if(cnt!=-1) cout << "YES" << endl;
    }
    return 0;
}
