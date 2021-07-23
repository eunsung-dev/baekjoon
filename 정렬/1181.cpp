#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    scanf("%d",&N);
    vector<pair<int,string> > v;
    string temp;
    string compare_str[N];
    bool flag = false;
    for(int i = 0; i < N; i++){
        flag = false;
        cin >> temp;
        for(int j = 0; j < i; j++){
            if(temp == v[j].second){
                flag = true;
            }
        }
        if(flag){
            v.push_back(make_pair(0,"#"));
            continue;
        }
        v.push_back(make_pair(temp.length(),temp));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < N; i++){
        if(v[i].second.compare("#") == 0)
            continue;
        printf("%s\n",v[i].second.c_str());
    }

    return 0;
}