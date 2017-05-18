#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    while(cin>>a>>b){
        if(a%2 == 0)
            a+=1;
        if(b%2 == 0)
            b-=1;

        ll sum=0;
        for(ll i = a;i <= b;i+=2){
            sum+=i;
        }
        cout<<sum<<endl;
    }
}
