#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main(void)
{
    int A=0, K=0, temp=0;
    vector<int> arr;
    printf("몇개, 몇번째 입력 : ");
    scanf("%d %d", &A, &K);
    for(int i=0; i<A; i++){
        printf("%d 번째 입력 : ", i+1);
        scanf("%d", &temp);
        arr.push_back(temp);
    }
    
    sort(arr.begin(), arr.end());
    
    printf("정답 : %d", arr[K-1]);
    return 0;
}
