#include <iostream>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    if(N == 1){
        printf("1");
        return 0;
    }
    int i = 0;
    for(int sum = 2; sum <= N; i++){
        sum += 6*i;
    }
    printf("%d",i);

    return 0;
}