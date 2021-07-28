#include <bits/stdc++.h>
using namespace std;
int N, M;
int arr[9] = {0,};
bool check[9] = {false,};
void com(int n){
    if(n == M){
        for(int i = 0; i < M; i++)
            printf("%d ",arr[i]);
        printf("\n");
        return;
    }
    for(int i = 1; i <= N; i++){
        if(!check[i]){
            // check[i] = true;
            arr[n] = i;
            com(n+1);
            check[i] = false;
        }
    }
}
int main(void){
    scanf("%d%d",&N,&M);
    com(0);

    return 0;
}