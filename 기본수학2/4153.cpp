#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int A,B,C;
    int res1, res2, res3;
    while(true){
        scanf("%d%d%d",&A,&B,&C);
        if(A == 0 && B == 0 && C == 0)
            break;
        res1 = pow(A,2);
        res2 = pow(B,2);
        res3 = pow(C,2);
        if((res1 + res2 == res3) || (res1 + res3 == res2) || (res2 + res3 == res1))
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}