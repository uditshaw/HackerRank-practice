#include <bits/stdc++.h>
using namespace std;

int n,k,i,b,a;
long s=0;

int main()
{
    cin >> n >> k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(i!=k)
        s+=arr[i];
    }
    cin >> b;
    a=s/2;
    if(a==b)
    cout << "Bon Appetit";
    else
    cout << b-a;
    
}