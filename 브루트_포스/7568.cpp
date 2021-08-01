#include <iostream>
#include <utility>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    pair<int,int> arr[N];
    int rank[N];
    for(int i = 0; i < N; i++)
        rank[i] = 1;
    int index = 0;
    int temp = N;
    while(temp--){
        scanf("%d %d",&arr[index].first,&arr[index].second);
        ++index;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((i != j) && (arr[i].first < arr[j].first) && (arr[i].second < arr[j].second))
                ++rank[i];
        }
    }
    for(int i = 0; i < N; i++)
        printf("%d ",rank[i]);
    return 0;
}