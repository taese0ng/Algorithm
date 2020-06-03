#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget){
    int answer = 0;
    sort(d.begin(), d.end());
    for(int i=0; i<(int)d.size(); ++i){
        if(budget < d[i]) break;
        answer++;
        budget-=d[i];
    }
    return answer;
}

int main(void){
    vector<int> d;
    int budget = 9;
    
    d.push_back(1);
    d.push_back(3);
    d.push_back(2);
    d.push_back(5);
    d.push_back(4);
    
    cout << solution(d, budget) << endl;
    
    return 0;
}
