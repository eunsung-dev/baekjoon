#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    long long N;
    vector<int> arr;
    scanf("%lld",&N);
    while(N){
        arr.push_back(N%10);
        N /= 10;
    }
    sort(arr.rbegin(),arr.rend());
    for(int i = 0; i < arr.size(); i++)
        printf("%d",arr[i]);
    return 0;
}