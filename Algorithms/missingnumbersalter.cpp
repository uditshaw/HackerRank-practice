#include <bits/stdc++.h>
using namespace std;

int i,m,n,maxm=1,x,minm=10000;
int main()
{
    cin >> n;
    int arr[10000];
    while(n--)
    {
        cin >> x;arr[x]++;
    }
    cin >> m;
    while(m--)
    {
        cin >> x;arr[x]--;
        if(x>maxm) maxm=x;
        if(x<minm) minm=x;
    }
    for(i=minm;i<=maxm;i++)
    {
        if(arr[i]<0) cout<<i<<" ";
    }
}