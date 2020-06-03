#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct xy{
    int x;
    int y;
};

bool cmpxy(xy A, xy B){
    if(A.y == B.y)
        return A.x < B.x;
    return A.y < B.y;
}

int main(void){
    vector<xy> z;
    struct xy input;
    int N=0;
    printf("몇개의 좌표를 입력하시겠습니까? : ");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &input.x, &input.y);
        z.push_back(input);
    }
    
    sort(z.begin(),z.end(),cmpxy);
    
    for(int i=0; i<N; i++){
        printf("%d %d\n", z[i].x, z[i].y);
    }
    return 0;
}
