#include <bits/stdc++.h>
using namespace std;
long long arr[91] = {0,};
long long d[91] = {0,};
long long fibo(int n){
    if(n <= 1)
        return n;
    else{
        if(d[n] > 0)
            return d[n];
        d[n] = fibo(n-2) + fibo(n-1);
        return d[n];
    }
}
int main(void){
    int n;
    arr[0] = 0;
    arr[1] = 1;
    scanf("%d",&n);
    printf("%lld",fibo(n));

    return 0;
}