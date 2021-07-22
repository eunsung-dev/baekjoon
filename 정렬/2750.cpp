#include <iostream>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    int arr[N];
    int index = 0, min_val = 1001;
    while(N--){
        scanf("%d",&arr[index]);
        ++index;
    }
    for(int i = 0; i < index; i++){
        for(int j = i + 1; j <index; j++){
            if(arr[i] > arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < index; i++)
        printf("%d\n",arr[i]);

    return 0;
}