#include <iostream>
using namespace std;
int fibo(int n){
    if(n < 2)
        return n;
    return fibo(n-1) + fibo(n-2);
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}