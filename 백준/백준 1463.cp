#include <iostream>
#include <cstdio>

using namespace std;

int min(int x, int y){
    return (x<y ? x:y);
}

int main(void){
    int N=0;
    int arr[1000001];
    printf("숫자를 입력하시오 : ");
    scanf("%d", &N);
    arr[0] = arr[1] = 0;
    for(int i=2; i<=N; i++){
        arr[i] = arr[i-1]+1;
        if(i%2==0)
            arr[i] = min(arr[i],arr[i/2]+1);
        if(i%3==0)
            arr[i] = min(arr[i],arr[i/3]+1);
    }
    printf("1을 만들수있는 최소 경로는 : %d 개 입니다.\n", arr[N]);
    
    return 0;
}
