#include <iostream>
using namespace std;
int main(void){
    int N, M;
    scanf("%d%d",&N,&M);
    int arr[N], index = 0;
    int res = 0;
    while(N--){
        scanf("%d",&arr[index]);
        index++;
    }
    for(int i = 0; i < index; i++){
        for(int j = i+1; j < index; j++){
            for(int k = j+1; k < index; k++){
                if(arr[i]+arr[j]+arr[k] > res && arr[i]+arr[j]+arr[k] <= M){
                    res = arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    printf("%d",res);

    return 0;
}