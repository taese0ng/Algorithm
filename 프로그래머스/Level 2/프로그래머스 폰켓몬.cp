#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums){
    int answer = 0;
    sort(nums.begin(), nums.end());
    
    for(int i=1; i<(int)nums.size(); ++i){
        if(nums[i-1] != nums[i]) ++answer;
        if(answer==((int)nums.size()/2)) break;
        if((int)nums.size()-1 == i)++answer;
    }
    return answer;
}

int main(void){
    vector<int> nums = {3,3,3,2,2,2};
    cout << solution(nums) << endl;
    return 0;
}
