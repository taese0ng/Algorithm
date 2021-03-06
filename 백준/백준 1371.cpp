#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int alphabet[26];

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    
    while (cin>>s)
    {
        for (int i = 0; i < s.length(); i++) if (s[i] >= 'a' && s[i] <= 'z') alphabet[s[i] - 'a']++;
        s.clear();
        
    }
    int temp = alphabet[0];
    
    for (int i = 1; i < 26; i++) temp = max(alphabet[i], temp);
    
    for (int i = 0; i < 26; i++) if (alphabet[i] == temp) cout << (char)(i + 'a');
    cout << "\n";
    
    return 0;
    
}
