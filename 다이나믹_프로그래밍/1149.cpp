#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    int rgb[N][3];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&rgb[i][j]);
        }
    }
    int d[N][3];
    d[0][0] = rgb[0][0];
    d[0][1] = rgb[0][1];
    d[0][2] = rgb[0][2];
    for(int i = 1; i < N; i++){
        for(int j = 0; j < 3; j++){
            switch (j)
            {
                case 0:
                    d[i][0] = min(d[i-1][1],d[i-1][2]) + rgb[i][0];
                    break;
                case 1:
                    d[i][1] = min(d[i-1][0],d[i-1][2]) + rgb[i][1];
                    break;
                case 2:
                    d[i][2] = min(d[i-1][0],d[i-1][1]) + rgb[i][2];
                    break;
            }
        }
    }
    int res = INT_MAX;
    for(int i = 0; i < 3; i++){
        if(res > d[N-1][i])
            res = d[N-1][i];
    }
    printf("%d",res);
    

    return 0;
}