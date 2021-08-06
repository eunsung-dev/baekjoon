#include <bits/stdc++.h>
using namespace std;
int N;
int d[51] = {0,}, P[51] = {0,}, T[51] = {0,};
int main(void){
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        scanf("%d%d",&T[i],&P[i]);
    }
    int res = 0;
    for(int i = 1; i <= N; i++){
        int next1 = i + T[i];
        int next2 = i + 1;
        if(next1 <= N + 1) d[next1] = max(d[next1], d[i] + P[i]);
        if(next2 <= N + 1) d[next2] = max(d[next2], d[i]);
        res = max(max(res, d[next1]), d[next2]);
    }
    printf("%d", res);

    return 0;
}