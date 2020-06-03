#include <iostream>
#include <string>
using namespace std;

int Size, answer;
string str;

void odd_number(int entry){
    int temp_answer=1;
    for(int i=1; i<=Size; ++i){
        if(str[entry-i] == str[entry+i] && (entry-i>=0 || entry+i < Size)) temp_answer+=2;
        else break;
    }
    if(answer < temp_answer) answer = temp_answer;
}

void even_number(int entry){
    int temp_answer=0;
    for(int i=0; i<=Size; ++i){
        if(str[entry-i] == str[entry+i+1] && (entry-i>=0 || entry+i < Size)) temp_answer+=2;
        else break;
    }
    if(answer < temp_answer) answer = temp_answer;
}

int solution(string s)
{
    Size = (int)s.length();
    str = s;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    
    for(int i=0; i<Size; ++i){
        even_number(i);
        odd_number(i);
    }
    return answer;
}



int main(void){
    string s = "abacde";
    
    cout << solution(s)<< endl;
    
    return 0;
}
