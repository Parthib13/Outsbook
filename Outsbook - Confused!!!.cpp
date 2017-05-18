#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    while(cin>>n){
        flag = 0;

            for(int i = 2;i < n;i++){
                if(n % i == 0){
                   cout<<n<<" is divisible by "<<i<<endl;
                   flag = 1;
                   break;
                }
            }

        if(flag == 0){
            cout<<"Confused\n";
        }
    }
}
