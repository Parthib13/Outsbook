#include <bits/stdc++.h>
using namespace std;
int t=0;
int main()
{
    int n, rem;
    while(cin>>n){
        int sum = 0;


            while(n > 0)
          {
                     while(n != 0)
                     {
                          rem = n%10;
                          sum = sum+rem;
                          n=n/10;
                     }
                     if(sum > 9)
                     {
                            n = sum;
                            sum = 0;
                     }
                }

        cout<<"Case #"<<++t<<": "<<sum<<endl;
    }
}
