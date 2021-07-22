#include <iostream>
#include <limits.h>
using namespace std;
int main(void){
    int M, N;
    int flag = 0;
    int sum = 0;
    int min = INT_MAX;
    scanf("%d%d",&M,&N);
    for(int i = M; i <= N; i++){
        flag = 0;
        for(int j = 2; j <= i/2; j++){
            if((i % j) == 0){
                flag = 1;
                break;
            }
        }
        if(i != 1 && flag == 0){
            sum += i;
            if(min > i)
                min = i;
        }
    }
    if(min == INT_MAX)
        printf("-1\n");
    else
        printf("%d\n%d\n",sum,min);
    return 0;
}