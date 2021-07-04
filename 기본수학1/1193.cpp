#include <iostream>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    int i = 1,j = 0;
    int den = 0, num = 0;
    int index = 0;
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < i; j++) {
                if (i % 2 == 1) {
                    den = j + 1;
                    num = i - j;
                } else {
                    den = i - j;
                    num = j + 1;
                }
                index++;
                if (index == N) {
                    printf("%d/%d",num,den);
                    return 0;
                }
            }
        }

    return 0;
}