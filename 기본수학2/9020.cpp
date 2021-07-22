#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int arr[10001];
    for(int i = 2; i < 10001; i++){
        arr[i] = i;
    }
    for(int i = 2; i < 10001; i++){
        if(arr[i] == 0)
            continue;
        for(int j = i + i; j < 10001; j += i){
            arr[j] = 0;
        }
    }
    // for(int i = 2; i < 10001; i++){
    //     printf("%d\t",arr[i]);
    // }
    int T;
    int n;
    int ans_1 = 0, ans_2 = 0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        ans_1 = 0, ans_2 = 0;
        for(int i = 2; i < n; i++){
            if(arr[i] >= n)
                break;
            if(arr[i] + arr[n-i] == n){
                // printf("i: %d\tj: %d\n",i,j);
                if(ans_1 == 0 && ans_2 == 0){
                    ans_1 = i;
                    ans_2 = n-i;
                }
                else if(abs(arr[n-i] - arr[i]) <= abs(ans_2 - ans_1)){
                    ans_1 = i;
                    ans_2 = n-i;
                }
            }
        }
        printf("%d %d\n",ans_2,ans_1);
    }
    return 0;
}