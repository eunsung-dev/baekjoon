#include <bits/stdc++.h>
using namespace std;
int N, M;
int arr[9] = {0,};
bool check[9] = {false,};
void permutation(int n, int cnt){
    if(cnt == M){
        for(int i = 0 ; i < M; i++)
            printf("%d ",arr[i]);
        printf("\n");
        return;
    }
    for(int i = n; i <= N; i++){
        if(!check[i]){
            check[i] = true;
            arr[cnt] = i;
            permutation(i+1, cnt+1);
            check[i] = false;
        }
    }
}
int main(void){
    scanf("%d%d",&N,&M);
    permutation(1,0);
    return 0;
}