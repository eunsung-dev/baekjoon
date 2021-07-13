#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int n;
    int cnt;
    int arr[1000000];
    for(int i = 2; i <= 500000; i++){
        arr[i] = i;
    }
    for(int i = 2; i <= 500000; i++){
        if(arr[i] == 0)
            continue;
        for(int j = i + i; j <= 500000; j += i){
            arr[j] = 0;                
        }
    }
    while(true){
        cnt = 0;
        scanf("%d",&n);
        if(n == 0)
            break;
        // for(int i = n+1; i <= 2*n; i++){
        //     for(int j = 2; j <= sqrt(i); j++){
        //         if((i % j) == 0){
        //             ++cnt;
        //             break;
        //         }
        //     }
        // }
        for(int i = 2; i <= 500000; i++){
            if(arr[i] != 0 && n < arr[i] && arr[i] <= 2*n){
                ++cnt;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}