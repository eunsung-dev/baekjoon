#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    string A,B;
    int sum = 0;
    string res;
    cin >> A;
    cin >> B;
    while(!A.empty() || !B.empty() || sum){
        if(!A.empty()){
            sum += A.back() - '0';
            A.pop_back();
        }
        if(!B.empty()){
            sum += B.back() - '0';
            B.pop_back();
        }
        res.push_back((sum%10) + '0');
        sum /= 10;
    }
    reverse(res.begin(),res.end());
    printf("%s\n",res.c_str());
    return 0;
}