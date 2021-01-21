#include <bits/stdc++.h>
using namespace std;

int n,t;
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n],i,flag=0,sum=0,leftsum=0;
        for(i=0;i<n;i++)
        {cin >> arr[i];sum+=arr[i];}
        for(i=0;i<n;i++)
        {
            sum-=arr[i];
            if(leftsum==sum)
            {flag=1;break;}
            leftsum+=arr[i];
        }
        if(flag==1) cout << "YES\n";
        else cout << "NO\n";
    }
}