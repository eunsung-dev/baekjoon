#include <iostream>
using namespace std;
int main(void){
    int T;
    int k, n;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&k,&n);
        int arr[k+1][n+1];
        for(int i = 0; i < k+1; i++){
            for(int j = 0; j < n+1; j++){
                arr[i][j] = 0;
            }
        }
        //  0층에 j번째 호실의 값은 j
        for(int j = 1; j < n+1; j++){
            arr[0][j] = j;
        }
        //  각 층의 첫번째 호실은 아래층 호실의 값
        for(int i = 1; i < k+1; i++){
            arr[i][1] = arr[i-1][1];
        }
        //  각 층의 첫번째 호실의 값은 결정되었으니 두번째 호실의 값을 결정
        //  a층 b호 = a층 b-1호 + a-1층 b호
        for(int i = 1; i < k+1; i++){
            for(int j = 2; j < n+1; j++){
                arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }
        printf("%d\n",arr[k][n]);
    }
    return 0;
}