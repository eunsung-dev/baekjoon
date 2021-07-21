#include <iostream>
#include <string>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    long long arr[10000] = {0,};
    int index = 1;
    int i = 666;
    while(true){
        if(to_string(i).find("666") != string::npos){
            arr[index] = i;
            ++index;
        }
        ++i;
        if(index == 10001)
            break;
    }
    printf("%lld",arr[N]);
    return 0;
}