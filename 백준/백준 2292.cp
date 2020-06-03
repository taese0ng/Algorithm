#include <iostream>

using namespace std;

int N, six=1, num=1;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    while(N>num){
        num = num+(six*6);
        six++;
    }
    cout << six;
    
    return 0;
}
