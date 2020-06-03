#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int A, int B){
    if(!(A%B)) return B;
    return gcd(B, A%B);
}

int solution(vector<int> arr){
    int answer = arr[0];
    sort(arr.begin(), arr.end());
    for(int i=1; i<(int)arr.size(); ++i){
        answer = answer * arr[i] / gcd(arr[i], answer);
    }
    return answer;
}

int main(void){
    vector<int> arr = {4,6,7,8,12};
    
    cout << solution(arr) << endl;
    
    return 0;
}
