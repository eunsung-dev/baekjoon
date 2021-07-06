#include <iostream>
#include <sstream>
using namespace std;
int main(void){
    int T;
    int H, W, N;
    int index = 0;
    int exitLoop = 0;
    scanf("%d",&T);
    while(T--){
        exitLoop = 0;
        index = 0;
        scanf("%d%d%d",&H,&W,&N);
        string arr[H][W];
        for(int j = 0; j < W; j++){
            for(int i = 0; i < H; i++){
                if(j < 9){
                    arr[i][j] = to_string(i+1) + to_string(0) + to_string(j+1);
                }
                else{
                    arr[i][j] = to_string(i+1) + to_string(j+1);
                }
                ++index;
                if(index == N){
                    printf("%s\n",arr[i][j].c_str());
                    exitLoop = 1;
                    break;
                }
            }
            if(exitLoop == 1)
                break;
        }

    }
    
    return 0;
}