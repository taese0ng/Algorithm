#include <iostream>
#include <algorithm>

using namespace std;

int abcd[4];
int A, B;

int main(void){
    cin >> abcd[0] >> abcd[1] >> abcd[2] >> abcd[3];
    sort(abcd, abcd+4);
    cout << abcd[0] * abcd[2] << endl;
    return 0;
}
