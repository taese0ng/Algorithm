#include <stdio.h>
#include <stdlib.h>


int main(void){
    int N=0,temp = 0;
    int q, S=0;
    printf("몇개를 입력하시겠습니까? : " );
    scanf("%d", &N);
    int *A = (int*)calloc(N, sizeof(int));
    int *B = (int*)calloc(N, sizeof(int));
    
    printf("행렬 A를 입력하세요.\n");
    for(int i=0; i<N;i++){
        scanf("%d", &A[i]);
    }
    printf("행렬 B를 입력하세요.\n");
    for(int i=0; i<N; i++){
        scanf("%d", &B[i]);
    }
    
    for(int i=0; i<N; i++){
        for(q = 0; q<N; q++){
            if(A[i] > A[q]){
                temp = A[i];
                A[i] = A[q];
                A[q] = temp;
            }
        }
        for(q=0; q<N; q++){
            if(B[i] < B[q]){
                temp = B[i];
                B[i] = B[q];
                B[q] = temp;
            }
        }
    }
    
    for(int i=0; i<N; i++){
        S += A[i]*B[i];
    }
    printf("각 행렬의 곱을 합한 것 중 최소값은 : %d 입니다.\n", S);
    return 0;
}
