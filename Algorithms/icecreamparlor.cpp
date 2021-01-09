#include <bits/stdc++.h>
using namespace std;

int m,t,n;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        int arr[n],i;
        for(i=0;i<n;i++) cin>>arr[i];
        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==m)
                cout<< i+1 <<" "<<j+1<< endl;
            }
        }
    }
}