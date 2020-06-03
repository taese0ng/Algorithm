#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct abc{
    int A;
    int B;
    int C;
};

bool cmpabc(abc a, abc b){return a.C<b.C;}

int main(void)
{
    
    int V, E, sum=0, N=0, temp = 0;

    vector<int> parent;
    scanf("%d %d", &V, &E);
    for(int i=0; i<V; i++){
        parent.push_back(i+1);
    }
    struct abc arr[E];
    for(int i=0;i<E;i++){
        scanf("%d %d %d", &arr[i].A, &arr[i].B, &arr[i].C);
    }
    
    sort(arr, arr+E, cmpabc);
    
    for(int i=0; i<E; i++){
        if(parent[arr[i].A-1] == parent[arr[i].B-1])
            continue;
        else if(parent[arr[i].A-1]>parent[arr[i].B-1]){
            temp = parent[arr[i].A-1];
            for(int j=0; j<V; j++){
                if(parent[j]==temp)
                    parent[j] = parent[arr[i].B-1];
            }
        }
        else if(parent[arr[i].A-1] < parent[arr[i].B-1]){
            temp = parent[arr[i].B-1];
            for(int j=0; j<V; j++){
                if(parent[j]==temp)
                    parent[j] = parent[arr[i].A-1];
            }
        }
        sum += arr[i].C;
        N++;
        if(N == V-1)
            break;
    }
    
    printf("%d\n", sum);
    return 0;
}
