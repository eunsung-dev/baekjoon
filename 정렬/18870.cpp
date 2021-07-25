#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    vector<int> v;
    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        v.push_back(temp);
    }
    vector<int> vv(v);
    sort(vv.begin(),vv.end());
    vv.erase(unique(vv.begin(),vv.end()),vv.end());
    for(int i = 0; i < N; i++){
        int iter = lower_bound(vv.begin(),vv.end(),v[i]) - vv.begin();
        cout << iter << ' ';
    }
    return 0;
}