#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(int n){
    string answer = "";
    int i;
    int num[3] = {4,1,2};
    
    while(n > 0){
        i = n%3;
        n = n/3;
        if(i==0){
            n -= 1;
        }
        answer = to_string(num[i]) + answer;
    }
    
    return answer;
}

int main(void){
    int n = 10;
    
    cout << solution(n) << endl;
    
    return 0;
}
