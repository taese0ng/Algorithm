#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;

struct student{
    int age;
    char name[101];
    int num;
};

bool cmpst(student A, student B){
    if(A.age == B.age){
        return A.num < B.num;
    }
    return A.age < B.age;
}

int main(void){
    int N=0;
    vector<student> st;
    struct student input;
    printf("몇명? : ");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %s",&input.age, input.name);
        input.num = i;
        st.push_back(input);
    }
    
    sort(st.begin(),st.end(),cmpst);
    
    for(int i=0; i<N; i++){
        printf("%d %s\n", st[i].age, st[i].name);
    }
    return 0;
}
