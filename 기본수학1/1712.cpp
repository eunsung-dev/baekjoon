#include <iostream>
using namespace std;
int main(void){
    int A, B, C;
    int i = 1;
    cin >> A >> B >> C;
    //A + B*i <= C*i
    if(B>=C)
        printf("-1");
    else
        printf("%d",A/(C-B) + 1);
    return 0;
}