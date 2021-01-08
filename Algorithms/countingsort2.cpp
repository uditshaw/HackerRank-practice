#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int x,result[100]={};
    for(i=0;i<n;i++)
    {
        cin >> x;
        result[x]++;
    }
    for(i=0;i<100;i++)
    {
        while(result[i]--)
        {
            cout << i << " ";
        }
    }
}