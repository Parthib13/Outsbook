#include <bits/stdc++.h>


using namespace std;


int main(void){)00
{

    int n, m, k, temp, tempx, tempy;
;
    cin >> n >> m n>>m>> k;

  set<int> holes;
  m-=1;
    int flag1 = -1, flag2 = 0;
    int a[n];
    for(int i=0; i<m;  = 0;i < n;i++){

        cin >> temp;
    holes.insert(temp);
  }
  int bone = 1;
  int ans = -1;
  if (holes.find(bone) != holes.end())
    ans = bona[i];
    }
    for(int i = 0;i < n;i++){
        if(i == m){
            continue;

  for(int i=0; i<k; i++){
    cin >> tempx >> tempy;
    if(tempx == bone){
      bone = tempy;
    }else if(tempy == bone){
      bone = tempx;
      }
        else{
            if(a[i] != 0 && a[i] <= k){
                if(flag1 != -1)
                }
    if (holes.find(bone) != holes.end()){
      ans = bone;
      break;
    }
  }
  if(ans != -1)
    cout << ans << endl;
  elseflag1 = min(flag1, abs(i-m)*10);
                else
                    flag1 = abs(i-m)*10;
            }
        }
    }

    cout << bone flag1<< endl;


}
