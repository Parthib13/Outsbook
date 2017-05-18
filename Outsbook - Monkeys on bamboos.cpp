#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    int n, sum = 0;
    while(cin>>n){
            sum = 0;
        int a[n+1];
        for(int i = 0;i < n;i++){
            cin>>a[i];
        }
        for(int i = 0;i < n-1;i++){
            sum = sum+i;
        }
        if(sum <= a[n-1]){
            cout<<"Case "<<++t<<": Monkeys got BAMBOO\n";
        }
        else
            cout<<"Case "<<++t<<": BAMBOO got Monkeys\n";
    }
}
