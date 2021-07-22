#include <iostream>
using namespace std;
int main(void){
    int x,y,w,h;
    scanf("%d%d%d%d",&x,&y,&w,&h);
    int up = h-y;
    int down = y;
    int left = x;
    int right = w-x;
    printf("%d",min(up,down) > min(left,right)?min(left,right):min(up,down));

    return 0;
}