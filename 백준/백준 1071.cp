#include <cstdio>
#include <algorithm>

using namespace std;
int N, j, temp, i, cnt, cnt2;
int arr[51];

int main(void)
{
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, arr + N);
    
    for (i = 1; i < N; ++i) {
        if (arr[i - 1] + 1 == arr[i]) {
            for (j = i + 1; j < N; ++j) {
                if (arr[i] != arr[j])
                    break;
            }
            if (j < N) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i = j;
            }
        }
    }
    
    i = N - 1;
    
    while (i > 0) {
        if (arr[i] != arr[i - 1]) {
            ++cnt;
            break;
        }
        --i;
    }
    
    if (arr[i] == arr[i - 1] + 1) {
        j = i - 1;
        while (j > 0) {
            if (arr[j] != arr[j - 1]) {
                ++cnt2;
                break;
            }
            --j;
        }
        i = N - 1;
        while (j < i && arr[j] < arr[i]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i--;
            j++;
        }
    }
    
    
    for (int i = 0; i < N; ++i) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

