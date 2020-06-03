#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> seoul){
    string answer = "";

    for(int i=0; i<(int)seoul.size(); ++i){
        if(seoul[i] == "Kim"){
            answer = "김서방은 ";
            answer += to_string(i);
            answer += "에 있다";
            break;
        }
    }
    return answer;
}

int main(void){
    vector<string> seoul;
    seoul.push_back("Jane");
    seoul.push_back("Kim");
    
    cout << solution(seoul) << endl;
    return 0;
}
