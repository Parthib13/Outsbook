#include <bits/stdc++.h>
using namespace std;

long long ball_calc(long long p){
    if(p == 1){
        return 1;
    }
    if(p == 2){
        return 2;
    }
    long long ans = ball_calc(p/2) + ball_calc(p/3);

    return ans;
}
int main()
{
    freopen("input.txt", "r", stdin);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<ball_calc(n)<<endl;
    }
}
