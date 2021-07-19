#include <iostream>
#include <limits.h>
using namespace std;
int main(void){
    int N;
    int res = INT_MAX;
    int sum;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        int j = i;
        sum = 0;
        while(j != 0){
            sum += j%10;
            j /= 10;
        }
        // printf("i: %d\tsum: %d\n",i,sum);
        if(i + sum == N){
            if(i < res){
                res = i;
            }
        }
    }
    if(res != INT_MAX)
        printf("%d",res);
    else
        printf("0");
    return 0;
}