#include <bits/stdc++.h>
using namespace std;
int N,M;
int arr[9] = {0,};
bool check[9] = {false,};
void com(int n, int cnt){
    if(cnt == M){
        for(int i = 0; i < M; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    for(int i = n; i <= N; i++){
        check[i] = true;
        arr[cnt] = i;
        com(i,cnt+1);
        check[i] = false;
    }

}
int main(void){
    scanf("%d%d",&N,&M);
    com(1,0);
    return 0;
}