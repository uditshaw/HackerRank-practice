//Optimized code
#include <bits/stdc++.h>
using namespace std;

int s,t,a,b,m,n;

int main()
{
    cin >> s >>t >> a >> b >> m >> n;
    int x,apple=0,orange=0;
    while(m--)
    {
        cin >> x;
        if(x+a>=s && x+a<=t)
        apple++;
    }
    while(n--)
    {
        cin >> x;
        if(x+b>=s && x+b<=t)
        orange++;
    }
    cout << apple << endl << orange;
}