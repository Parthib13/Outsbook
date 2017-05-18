#include <bits/stdc++.h>
using namespace std;
//int visited[100][100];
int X[] = {-2, +1, -2, -1, +2, +2, -1, +1};
int Y[] = {+1, +2, -1, -2, -1, +1, +2, -2};

int main()
{
    int sX, sY, eX, eY;
    while(cin>>sX>>sY>>eX>>eY){

        bool flag = 0;
        for(int i = 0;i < 8;i++){
            int x = sX + X[i];
            int y = sY + Y[i];
            if(x == eX && y == eY)
            {
                 cout<<"A is attacked by K.\n";
                 flag = 1;
                 break;
            }
        }
        if(flag == 0)
        cout<<"A is not attacked by K.\n";
    }
}
