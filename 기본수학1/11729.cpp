#include <iostream>
#include <math.h>
using namespace std;
void hanoi(int n, int start, int end, int pass){
    if(n == 1)
        printf("%d %d\n",start, end);
    else{
        hanoi(n-1,start,pass,end);
        printf("%d %d\n",start, end);
        hanoi(n-1,pass,end,start);
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d\n",(int)pow(2,n)-1);
    hanoi(n,1,3,2);
    return 0;
}