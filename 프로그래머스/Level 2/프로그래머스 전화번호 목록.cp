#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    int q=0;
    sort(phone_book.begin(), phone_book.end());
    for(int i=0; i<phone_book.size(); ++i){
        for(int j=i+1; j<phone_book.size(); ++j){
            if(phone_book[i].length() < phone_book[j].length()){
                for(q=0; q<phone_book[i].length(); ++q){
                    if(phone_book[i][q] != phone_book[j][q]) {
                        break;
                    }
                }
                if(q==phone_book[i].length()) return false;
            }
        }
        
    }
    return true;
}

int main(void){
    vector<string> phone_book = {"119","97674223", "1195524421"};
    vector<string> phone_book2 = {"123", "456","789"};
    vector<string> phone_book3 = {"12", "123", "1235","567","88"};
    cout << solution(phone_book2) << endl;
    return 0;
}
