#include <bits/stdc++.h>
using namespace std;

int n,i;

int main()
{
    cin >> n;
    int arr[n],maxm;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(i==0) maxm=arr[0];
        else if(arr[i]>maxm) maxm=arr[i];
    }
    int result[maxm+1]={};
    for(i=0;i<n;i++) ++result[arr[i]];
    for(i=0;i<maxm+1;i++)
    cout << result[i] << " ";
}