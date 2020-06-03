#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;
int N;
int arr[51];
bool check[51];
int sarr[51];
bool flag;

void DFS(int level) {
    if (flag)
        return;
    if (level == N) {
        flag = true;
        for (int i = 0; i < N; ++i) {
            printf("%d ", sarr[i]);
        }
        printf("\n");
        return;
    }
    int tmp = sarr[level - 1] + 1;
    for (int i = 0; i < N; ++i) {
        if (!check[i]) {
            if (tmp == arr[i]) continue;
            sarr[level] = arr[i];
            check[i] = true;
            DFS(level + 1);
            check[i] = false;
            if (flag)
                return;
        }
    }
}

int main(void) {
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, arr + N);
    
    for (int i = 0; i < N; ++i) {
        if (flag) break;
        sarr[0] = arr[i];
        check[i] = true;
        DFS(1);
        check[i] = false;
    }

    return 0;
}
