#include <bits/stdc++.h>
using namespace std;
int cX[] = {+0, +0, +1, -1, +1, -1, -1, +1};
int cY[] = {+1, -1, +0, +0, +1, +1, -1, -1};
int main()
{
    int t;
    cin>>t;
    while(t--){
        char a[100][100];
        int n, cnt = 0, mine = 0;
        cin>>n;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin>>a[i][j];
                if(a[i][j] == '#'){
                    mine++;
                }
            }
        }
        //int cnt = 0;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                for(int k = 0;k < 8;k++){
                    if(a[i][j] == '#')continue;

                    int x = i+cX[k];
                    int y = j+cY[k];
                    if(a[x][y] == '#' && x >= 0&&y >=0 && x < n && y < n){
                        cnt++;
                        break;
                    }
                }
            }
        }
        cout<<cnt<< " "<<(n*n)-mine-cnt<<endl;

    }
}
