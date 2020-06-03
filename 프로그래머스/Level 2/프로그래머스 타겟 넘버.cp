#include <string>
#include <vector>
#include <iostream>

using namespace std;

int DFS(vector<int> numbers, int target, int start, int answer){
    if(start == numbers.size()){
        return answer == target ? 1 : 0;
    }
    else{
        return DFS(numbers, target, start+1, answer+numbers[start]) + DFS(numbers, target, start+1, answer-numbers[start]);
    }
}

int solution(vector<int> numbers, int target) {
    return DFS(numbers, target, 0, 0);
}

int main(void){
    vector<int> numbers = {1,1,1,1,1};
    int target = 3;
    cout << solution(numbers, target) << endl;
    return 0;
}
