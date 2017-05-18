#include <bits/stdc++.h>
using namespace std;
queue <int> a;
queue <int> b;
int m, n;
int arr[100][100];
bool visit[100][100];
int cX[] = {+0, +0, +1, -1};
int cY[] = {+1, -1, +0, +0};

void reset()
{
    memset(visit, false, sizeof visit);
    while(!a.empty()){
        a.pop();
    }
    while(!b.empty()){
        b.pop();
    }
}
int BFS(int sX, int sY, int eX, int eY)
{
    a.push(sX);
    b.push(sY);
    visit[sX][sY] = true;
    int flag = 0;
    char cek = '0';
    while(!a.empty()){
        int x = a.front();
        int y = b.front();
        a.pop();
        b.pop();
        if(x == eX && y == eY){
            flag = 1;
            break;
        }
        for(int i = 0;i < 4;i++){
            int child1 = x + cX[i];
            int child2 = y + cY[i];

            if(child1 > -1 && child1 < m && child2 > -1 && child2 < n && visit[child1][child2] == false && arr[child1][child2] == 1){

                a.push(child1);
                b.push(child2);
                visit[child1][child2] = true;
            }
        }
    }
    return flag;


}
int main(int argc, char const *argv[])
{
    puts("Hello!");
    int t;
    cin>>t;
    getchar();

    while(t--){
            reset();

        cin>>m>>n;
        int sX, sY, eX, eY;
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                cin>>arr[i][j];
                if(arr[i][j] == 'S'){
                    sX = i;
                    sY = j;
                }
                if(arr[i][j] == 'T'){
                    eX = i;
                    eY = j;
                }

            }
        }
        //a.push()
        cout<<sX<<sY<<eX<<eY;
        /*int flag = BFS(sX, sY, eX, eY);
        if(flag == 1){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";*/

    }

}
