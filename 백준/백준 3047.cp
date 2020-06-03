#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    int arr[3];
    string crr;
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    cin >> crr ;
    
    for(int i=0; i<3; i++){
        cout << arr[crr[i]-'A']<<" ";
    }
    cout<<"\n";
    return 0;
}
