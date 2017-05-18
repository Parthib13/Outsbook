#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

long int fact(long long);
int main()
{
	//clrscr();
	long long n, r;
	long long ncr, npr;
	while(cin>>n){
        r = 2;
        npr=fact(n)/fact(n-r);
        ncr=npr/fact(r);

        cout<<ncr<<endl;
	}



}
long long int fact(long long int x)
{
	long long i, f=1;
	for(i=2; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}
