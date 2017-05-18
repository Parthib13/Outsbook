#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int pos;
    int dist;
};
queue <Node> a;
bool visited[100];
int n;
int arr[100];
int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}
int reset()
{
    memset(visited, false, sizeof visited);

    while(!a.empty()){
        a.pop();
    }
}
int BFS(int s, int e)
{
    Node u, v;
    u.pos = s;
    u.dist = 0;
    a.push(u);
    visited[s] = true;
    while(!a.empty()){
        u = a.front();
        a.pop();

        if(u.pos == e){
            return u.dist;

        }
        for(int i = 0;i < n;i++){
            if(GCD(arr[i], arr[u.pos]) > 1 && visited[i] == false){
                visited[u.pos] = true;
                v.pos = i;
                v.dist = u.dist+1;
                a.push(v);
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        reset();
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        int query;
        cin>>query;
        while(query--){
            reset();
            int s, e;
            cin>>s>>e;
            int ans = BFS(s-1, e-1);
            if(ans == -1){
                cout<<"Impossible\n";
            }
            else
                cout<<ans<<endl;
        }
    }
}
