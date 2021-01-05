#include <bits/stdc++.h>
using namespace std;

int n,p,i;

int main()
{
    cin >> n;
    int l=0,r=0,e=0;
    int arr[n],left[n-1],right[n-1],equal[n-1];
    for(i=0;i<n;i++)
    cin >> arr[i];
    p=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>p)
        right[r++]=arr[i];
        else if(arr[i]<p)
        left[l++]=arr[i];
        else equal[e++]=arr[i];
    }
    for(i=0;i<l;i++)
    cout << left[i]<<" ";
    for(i=0;i<e;i++)
    cout << equal[i]<<" ";
    for(i=0;i<r;i++)
    cout << right[i]<<" ";
}