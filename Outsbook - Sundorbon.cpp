#include <bits/stdc++.h>
using namespace std;
queue <int> a;
queue <int> b;
int m, n;
char arr[100][100];
bool visit[100][100];
int cX[] = {+0, +0, +1, -1};
int cY[] = {+1, -1, +0, +0};
int ans[100][100];
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
void reset_2()
{
    memset(ans, -2, sizeof ans);
}
int BFS(int sX, int sY, int eX, int eY)
{
    int cnt = 1;
    a.push(sX);
    b.push(sY);
    visit[sX][sY] = true;
    int flag = 0;
    while(!a.empty()){
        int x = a.front();
        int y = b.front();
        a.pop();
        b.pop();
        if(x == eX && y == eY){
            flag = 1;
            break;
        }
        int cnt2;
        for(int i = 0;i < 4;i++){
            int child1 = x + cX[i];
            int child2 = y + cY[i];
            if(child1 > -1 && child1 < m && child2 > -1 && child2 < n && visit[child1][child2] == false && arr[child1][child2] == 'P'){

                a.push(child1);
                b.push(child2);
                visit[child1][child2] = true;
                cnt -= 1;
            }
        }
        cnt++;
    }
    return flag;


}
int main()
{
    while(cin>>n){
            reset();


        int sX, sY, eX, eY;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin>>arr[i][j];
                if(arr[i][j] == 'S'){
                    sX = i;
                    sY = j;
                }
                if(arr[i][j] == 'E'){
                    eX = i;
                    eY = j;
                }

            }
        }
        //a.push()



        char flag = BFS(sX, sY, eX, eY);
        cout<<flag<<endl;

    }

}
