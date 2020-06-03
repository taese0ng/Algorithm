#include <iostream>
#include <string>
#include <vector>

using namespace std;

int x, sum, realX;

bool solution(int x) {
    bool answer = true;
    realX = x;
    while(x/10>=1){
        sum+=(x%10);
        x=x/10;
    }
    sum+=x;
    if(realX%sum!=0) answer = false;
    return answer;
}

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;

    if(solution(num)) cout << "true";
    else cout <<"false";
    
    return 0;
}
