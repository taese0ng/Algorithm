#include <iostream>
#include <algorithm>

using namespace std;

int N, R, G, B, r, g, b, temp;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cout << "집의 개수를 입력하시오 : ";
    cin >> N;
    
    for(int i=0; i<N; ++i){
        cin >> r >> g >> b;
        r+=min(G,B); g+=min(R,B); b+=min(R,G);
        R = r; G = g; B = b;
    }
    temp = min(R,G);
    cout << min(temp, B) << endl;
    
    return 0;
}
