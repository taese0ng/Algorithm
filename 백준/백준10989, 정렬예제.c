/*#include <stdio.h>
#include <stdlib.h>

//퀵정렬
void Swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int Partition(int arr[], int left, int right){
    int pivot = arr[left];
    int low = left + 1;
    int high = right;
    
    while(low <= high){
        while(pivot >= arr[low] && low <= right)
            low++;
        while(pivot <= arr[high] && high >= (left+1))
            high--;
        if(low<=high)
            Swap(arr, low, high);
    }
    Swap(arr, left, high);
    return high;
}

void QuickSort(int arr[], int left, int right){
    if(left <= right){
        int pivot = Partition(arr, left, right);
        QuickSort(arr, left, pivot-1);
        QuickSort(arr, pivot+1, right);
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    int *arr = (int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    QuickSort(arr, 0, n-1);
    for(int i =0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
    
}
*/

#include <stdio.h>
//백준 10989 문제 정답
int arr[10001];

int main(void){
    int n, i;
    scanf("%d", &n);
    for(i = 0; i<n; ++i){
        int tmp;
        scanf("%d", &tmp);
        arr[tmp]++;
    }
    for(i=0; i<10001; i++){
        for(int j=0; j<arr[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}
