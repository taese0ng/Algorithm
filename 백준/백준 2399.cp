#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int main(void){
    int n=0, temp=0;
    long sum=0;
    vector<long> vec;
    printf("숫자를 입력하시오 : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        vec.push_back(temp);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum += abs(vec[i]-vec[j]);
        }
    }
    printf("%ld\n", sum);
    return 0;
}
