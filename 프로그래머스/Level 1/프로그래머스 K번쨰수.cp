#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    int start, end, pick;
    for(int i=0; i<commands.size(); ++i){
        start = commands[i][0]-1;
        end = commands[i][1];
        pick = commands[i][2]-1;
        for(int j=start; j<end; ++j){
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[pick]);
        temp.clear();
    }
    return answer;
}

int main(void){
    vector<int> array = {1,5,2,6,3,7,4};
    vector<vector<int>> commands = {{2,5,3},{4,4,1},{1,7,3}};
    
    vector<int> answer;
    answer = solution(array, commands);
    for(int i=0; i<answer.size(); ++i){
        cout << answer[i] << endl;
    }
}
