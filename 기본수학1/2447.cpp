#include <iostream>
using namespace std;
void printStar(int i, int j, int n){
    if((i/n) % 3 == 1 && (j/n) % 3 == 1){
        printf(" ");
    }
    else{
        if((n/3) == 0)
            printf("*");
        else
            printStar(i,j,n/3);
    }
}
int main(void){
    int N;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < N; j++){
            printStar(i,j,N);
        }
        printf("\n");
    }

    return 0;
}