#include <iostream>
using namespace std;
int main(void){
    int x1,y1,x2,y2,x3,y3;
    int ans_x, ans_y;
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if(x1 == x2)
        ans_x = x3;
    else if(x1 == x3)
        ans_x = x2;
    else
        ans_x = x1;

    if(y1 == y2)
        ans_y = y3;
    else if(y1 == y3)
        ans_y = y2;
    else
        ans_y = y1;
    printf("%d %d",ans_x,ans_y);    

    return 0;
}