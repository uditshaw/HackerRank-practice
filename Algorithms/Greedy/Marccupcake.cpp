#include <bits/stdc++.h>
using namespace std;

long int miles;
int n;

int main()
{
    cin >> n;
    int c[n],i;
    for(i=0;i<n;i++)
    cin>>c[i];
    sort(c,c+n,greater<int>());
    for(i=0;i<n;i++)
    miles+=pow(2,i)*c[i];
    cout << miles;
}