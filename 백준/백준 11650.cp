#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

struct xy{
    int x;
    int y;
};

bool cmpxy(xy a, xy b){
    if(a.x == b.x)
        return a.y<b.y;
    else
        return a.x<b.x;
}

int main(void){
    int N;
    scanf("%d", &N);
    struct xy z[N];
    
    for(int i=0; i<N; i++){
        scanf("%d %d", &z[i].x, &z[i].y);
    }
    
    sort(z, z+N, cmpxy);
    
    for(int i=0; i<N; i++){
        printf("%d %d\n", z[i].x, z[i].y);
    }
    return 0;
}
