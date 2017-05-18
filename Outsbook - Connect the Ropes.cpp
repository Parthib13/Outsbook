#include <bits/stdc++.h>
using namespace std;
stack <int> s;
stack <int>sum;
void reset()
{
    while(!s.empty())
        s.pop();
    while(!sum.empty())
        sum.pop();
}
int main()
{
    int t, kase = 0;
    cin>>t;
    while(t--){
        reset();
        //int a[1000];
        int n;
        cin>>n;
        for(int i = 0;i < n;i++)
            cin>>a[i];
        sort(a, a+n);
        for(int i = n-1;i > -1;i--){
            s.push(a[i]);

        }
        int res = 0, res2;//, cnt = 0;
        while(s.size() > 2){
            res = s.top();
            s.pop();
            int temp = s.top()+res;
            sum.push(temp);
            s.pop();
            s.push(temp);
            //cout<<sum.top();
            //cnt++;

        }
        //cout<<s.size()<<endl;
        int l = s.top();
        s.pop();
        sum.push(l+s.top());
        int ans = 0;
        while(!sum.empty()){
            ans += sum.top();
            sum.pop();
        }
        cout<<"Case "<<++kase<<": Cost="<<ans<<endl;

    }

}
