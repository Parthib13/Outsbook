#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, t, v, u;
    cin>>t;
    for(int i = 1;i <= t;i++){
        cin>>a;
       double n = sqrt(a);
        int k = n;
       if(k == n){
        cout<<"Case "<<i<<": "<<"Odd\n";
       }
       else
        cout<<"Case "<<i<<": "<<"Even\n";
    }

}
