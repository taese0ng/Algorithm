#include <iostream>

using namespace std;
int N, f, t;

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    if(N==3){
        cout << "1";
        return 0;
    }
    f = N/5;
    if((N%5) != 0){
        while(((N%5)+(5*t))%3 != 0){
            t++;
            f--;
            if(f<0){
                cout << "-1";
                return 0;
            }
        }
    }
    cout << f+(((N%5)+(5*t))/3);
    return 0;
}
