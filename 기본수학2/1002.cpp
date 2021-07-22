#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main(void){
    int T;
    int x1,y1,x2,y2,r1,r2;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        if((x1 == x2) && (y1 == y2) && (r1 == r2)){
            printf("-1\n");
            continue;
        }
        if((x1 == x2) && (y1 == y2) && (r1 != r2)){
            printf("0\n");
            continue;
        }
        double distance;
        double sub = fabs(r1-r2);
        distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        if(distance < r1+r2 && distance > sub)
            printf("2\n");
        else if(distance == r1+r2 || distance == sub)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}