#include <bits/stdc++.h>
#define max(a,b)  (((a) > (b)) ? (a) : (b))
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N][N];
    int d[N][N];
    int max = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            scanf("%d",&arr[i][j]);
            // printf("%d %d\n",i,j);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            d[i][j] = 0;
        }
    }
    d[0][0] = arr[0][0];
    for(int i = 1; i < N; i++){
        for(int j = 0; j <= i; j++){
            
            if(0 < j && j < i){
                d[i][j] = max(d[i-1][j-1],d[i-1][j]) + arr[i][j];
            }
            else if(j == 0){
                d[i][j] = d[i-1][j] + arr[i][j];
            }
            else{
                d[i][j] = d[i-1][j-1] + arr[i][j];
            }
        }
    }
    for(int i = 0; i < N; i++){
        if(max < d[N-1][i])
            max = d[N-1][i];
    }
    printf("%d",max);

    return 0;
}