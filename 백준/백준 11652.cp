#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct card{
    long long cardnum=0;
    int max=1;
};

int main(void){
    int N=0, temp1=1;
    long long temp;
    vector<long long> arr;
    struct card cd;
    printf("몇개의 카드가 있습니까? : ");
    scanf("%d", &N);
    
    for(int i=0; i<N; i++){
        scanf("%lld", &temp);
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    cd.cardnum = arr[0];
    for(int i=0; i<N-1; i++){
        if(arr[i] == arr[i+1])
            temp1++;
        else{
            if(cd.max < temp1){
                cd.max = temp1;
                cd.cardnum = arr[i];
            }
            else if((cd.max == temp1) && (cd.cardnum > arr[i])){
                cd.cardnum = arr[i];
            }
            temp1=1;
        }
    }
    printf("%lld\n", cd.cardnum);
    return 0;
}
