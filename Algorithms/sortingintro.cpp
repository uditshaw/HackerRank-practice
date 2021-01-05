#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,v,n;
    cin >> v >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=1;i<n;i++)
    {
        if(arr[i]==v) {cout << i;break;}
    }
}
        