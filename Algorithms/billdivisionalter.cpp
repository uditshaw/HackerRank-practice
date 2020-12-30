// Alternative soln without using array
#include <bits/stdc++.h>
using namespace std;

int n,b,a,s=0,i,k;
int main()
{
    cin >> n>>k;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(i!=k)
        s+=a;
    }
    cin >> b;
    if(s/2 == b) cout << "Bon Appetit";
    else cout << b - s/2;
}