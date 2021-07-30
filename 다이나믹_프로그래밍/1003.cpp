#include <bits/stdc++.h>
using namespace std;
int d[100] = {0,};
int fibo(int n){
    if(n <= 1)
        return n;
    else{
        if(d[n] > 0)
            return d[n];
        d[n] = fibo(n-1) + fibo(n-2);
        return d[n];
    }
}
int main(void){
    int N;
    scanf("%d",&N);
    while(N--){
        int n;
        scanf("%d",&n);
        if(n == 0)
            printf("1 0\n");
        else{
            printf("%d %d\n",fibo(n-1),fibo(n));
        }
    }

    return 0;
}