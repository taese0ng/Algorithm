#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N, i, j, top, R, L;
string arr[10000];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    
    for (i = 0; i < N; ++i) {
        cin >> arr[i];
        R = 0;
        j = 0;
        for (top = arr[i].length() - 1; top >= 0; --top) {
            if ((arr[i][top] == '(') && (R == 0)) {
                cout << "NO" << endl;
                j = 1;
                break;
            }
            else if (arr[i][top] == ')') {
                R++;
            }
            else if (arr[i][top] == '(') {
                R--;
            }
        }
        if (top == -1 && R==0) cout << "YES" << endl;
        else {
            if (j == 0) cout << "NO" << endl;
        }
    }
    
    return 0;
}
