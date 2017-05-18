#include <bits/stdc++.h>
using namespace std;

int
gcd ( long long a,long long b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

/* Recursive Standard C Function: Greatest Common Divisor */
int
gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}
int main()
{
    long long a, b, x, y, G, temp ;
    cin>>a>>b;
    G = gcd(a,b);
    if(a < b){
        temp = a;
    }
    else
        temp = b;
    g = gcd(a,b);
    for(int x = -1*temp;x <= G;x++){
        for(y = -1*temp;y <= G;y++){
            if(x*a+y*b== G){
                cout<<x<<" "<<y;
                return 0;
            }
        }
    }
}
