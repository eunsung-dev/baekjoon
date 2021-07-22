#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int N;
    double avg = 0;
    scanf("%d",&N);
    vector<long long> arr;
    int index = 0;
    int common[8001] = {0,};    // 인덱스 1~4000
    int common_index = 0, common_max = 0, common_value = 0;
    bool flag = false;
    long long temp = 0;
    while(N--){
        scanf("%lld",&temp);
        arr.push_back(temp);
        avg += temp;  // 산술평균
        ++common[4000+temp];
        ++index;
    }
    avg /= index;
    //  중앙값
    sort(arr.begin(),arr.end());
    // for(int i = 0; i < index; i++){
    //     for(int j = i + 1; j < index; j++){
    //         int temp = 0;
    //         if(arr[i] > arr[j]){
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    //  최빈값
    for(int i = 0; i < 8001; i++){
        if(common[i] == 0)
            continue;
        if(common_max == common[i]){
            if(flag == true){
                common_value = i - 4000;
                flag = false;
            }
        }
        if(common_max < common[i]){
            common_max = common[i];
            common_value = i - 4000;
            flag = true;
        }
    }
    //  범위
    // int min_val = 4001, max_val = -4001;
    // for(int i = 0; i < index; i++){
    //     if(min_val > arr[i])
    //         min_val = arr[i];
    //     if(max_val < arr[i])
    //         max_val = arr[i];
    // }

    printf("%.0f\n",(double)round(avg));
    printf("%lld\n",arr[index/2]);
    printf("%d\n",common_value);
    printf("%lld\n",arr.back()-arr.front());
    return 0;
}