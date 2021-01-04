#include <bits/stdc++.h>
using namespace std;

int t,n,k,i,c=0;

int main()
{
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> n >> k;
        c=0;
        for(int a,j=0;j<n;j++)
        {
            cin >> a;
            if(a<=0)
            c++;
        }
        if(c>=k)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
}