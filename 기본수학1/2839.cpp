#include <iostream>
using namespace std;
int main(void){
    int N = 0;
    int cnt = 0;
    scanf("%d",&N);
    while(N){
        if(N < 3){
            printf("-1");
            return 0;
        }
        if(N % 5 == 0){
            printf("%d",N/5+cnt);
            return 0;
        }
        else{
            N -= 3;
            ++cnt;
        }

    }
        printf("%d",cnt);
    return 0;
}