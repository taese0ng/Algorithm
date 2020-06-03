#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int cnt=0;
    
    for(int i=0; i<arr.size(); ++i){
        if(i==0){
            answer.push_back(arr[i]);
        }
        else if(answer[cnt] != arr[i]){
            answer.push_back(arr[i]);
            cnt++;
        }
    }
    
    return answer;
}

int main(void){
    vector<int> arr = {1,1,3,3,0,1,1};
    vector<int> result = solution(arr);
    for(int i=0; i<result.size(); ++i){
        cout << result[i];
    }
    return 0;
}
