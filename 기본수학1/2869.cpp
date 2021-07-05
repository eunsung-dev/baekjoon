#include <iostream>
using namespace std;
int main(void){
    int A, B, V;
    int res = 0, cnt = 1;
    scanf("%d%d%d",&A,&B,&V);
    res = (V-A) / (A-B) + 1;
    if(((V-A) % (A-B)) != 0)
        ++res;
    printf("%d",res);
    return 0;
}