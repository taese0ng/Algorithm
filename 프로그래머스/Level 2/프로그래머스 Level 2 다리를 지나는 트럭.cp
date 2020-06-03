#include <iostream>
#include <string>
#include <vector>

using namespace std;

int truck_time[10001];

int solution(int bridge_length, int weight, vector<int> truck_weights){
    int answer = 1, end_trucks = 0, doing_trucks = 0, trucks_size=0;
    
    while(end_trucks < (int)truck_weights.size()){
        if((end_trucks+doing_trucks < (int)truck_weights.size()) && (trucks_size + truck_weights[end_trucks + doing_trucks] <= weight)){
            trucks_size += truck_weights[end_trucks+doing_trucks];
            doing_trucks++;
        }
        
        for(int i=end_trucks; i<end_trucks+doing_trucks; ++i){
            truck_time[i]++;
        }
        
        if(truck_time[end_trucks] == bridge_length) {
            trucks_size-=truck_weights[end_trucks];
            end_trucks++;
            doing_trucks--;
        }
        answer++;
    }
    
    return answer;
}

int main(void){
    int bridge_length = 100, weight = 100;
    vector<int> truck_weights = {10,10,10,10,10,10,10,10,10,10};
    
    cout << solution(bridge_length, weight, truck_weights) << endl;
    
    return 0;
}
