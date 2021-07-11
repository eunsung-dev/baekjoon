#include <iostream>
using namespace std;
long long distance(long long n){
    long long num = n/2;
    long long res;
    if(n <= 2){
        return n;
    }
    else{
        if(n % 2 == 0){
            return (num*(num+1));
        }
        else{
            return (num*(num+1)) + num + 1;
        }
    }
}
int main(void){
    int T;
    long long x,y;
    long long cnt = 1;
    scanf("%d",&T);
    while(T--){
        cnt = 1;
        scanf("%lld%lld",&x,&y);
        while(y-x > distance(cnt)){
            cnt++;
        }
        printf("%lld\n",cnt);

    }

    return 0;
}