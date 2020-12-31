#include <bits/stdc++.h>
using namespace std;

int n,i,j,c=1;

int main()
{
    cin >>n;
    for(int a,i=0;i<n;i++)
    {
        cin >> a;c=1;
        for(j=0;j<a;j++)
        {
            if(j%2==0)
            c*=2;
            else
            c+=1;
        }
        cout << c << endl;
    }
}