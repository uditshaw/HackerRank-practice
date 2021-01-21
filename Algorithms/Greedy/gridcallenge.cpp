#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i;
    cin >> t;
    while(t--)
    {
        cin >> n;bool flag=false;
        string grid[n];
        for(i=0;i<n;i++)
        {
            cin >> grid[i];
            sort(grid[i].begin(), grid[i].end());
        }
        // for(i=0;i<n;i++)
        // cout << grid[i] << endl;
        //int size=grid[0].size();
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(grid[j][i]>grid[j+1][i])
                {flag=true;break;}
            } 
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
}