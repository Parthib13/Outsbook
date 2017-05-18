#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    char c;
    while(cin>>h>>c>>m){
        if(h == 12){
                if(m < 10){
            cout<<h<<":"<<0<<m<<" P.M."<<endl;return 0;
                    return 0;
        }
            cout<<h<<":"<<m<<" P.M."<<endl;return 0;
        }
        if(h == 00){
            if(m < 10){
            cout<<12<<":"<<0<<m<<" A.M."<<endl;return 0;
                    return 0;
        }
            cout<<12<<":"<<m<<" A.M."<<endl;return 0;
        }
    if(h>12){
        h = h-12;
        if(h < 10){
                if(m < 10){
                    cout<<0<<h<<":"<<0<<m<<" P.M."<<endl;
                    return 0;
                }
                else{
                    cout<<0<<h<<":"<<m<<" P.M."<<endl;
                    return 0;
                }
        }
        if(m < 10){
            cout<<h<<":"<<0<<m<<" P.M."<<endl;return 0;
                    return 0;
        }
        else{
            cout<<h<<":"<<m<<" P.M."<<endl;return 0;
        }
    }
    else{
        if(h < 10){
                if(m < 10){
                    cout<<0<<h<<":"<<0<<m<<" A.M."<<endl;return 0;
                    return 0;
                }
                else{
                    cout<<0<<h<<":"<<m<<" A.M."<<endl;return 0;
                    return 0;
                }
        }
        if(m < 10){
            cout<<h<<":"<<0<<m<<" A.M."<<endl;return 0;
                    return 0;
        }
        else{
            cout<<h<<":"<<m<<" P.M."<<endl;return 0;
        }
    }
    }
}
