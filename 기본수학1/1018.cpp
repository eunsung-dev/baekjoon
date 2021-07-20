#include <iostream>
#include <string>
#include <limits.h>
#include <algorithm>
#include <utility>
using namespace std;
string arr[50];
string black[8]={
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
string white[8]={
    "WBWBWBWB",
    "BWBWBWBW",    
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
int BlackBoard(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(black[i][j] != arr[i+x][j+y])
                ++cnt;
        }
    }
    return cnt;
}
int WhiteBoard(int x, int y){
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(white[i][j] != arr[i+x][j+y])
                ++cnt;
        }
    }
    return cnt;

}
int main(void){
    int N, M;
    int min_val = INT_MAX;
    scanf("%d%d",&N,&M);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0; i + 8 <= N; i++){
        for(int j = 0; j + 8 <= M; j++){
            int temp = 0;
            temp = min(WhiteBoard(i,j),BlackBoard(i,j));
            if(temp < min_val)
                min_val = temp;
        }
    }
    printf("%d",min_val);

    return 0;
}