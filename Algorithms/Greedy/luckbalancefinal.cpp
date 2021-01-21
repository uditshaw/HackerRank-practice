#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,one=0;
    cin >> n >> k;
    int x,y,c_one[n],luck=0;
    for(i=0;i<n;i++)
    {
        cin >> x >> y;
        if(y) c_one[one++]=x;
        else luck+=x;
    }
    sort(c_one,c_one+one,greater<int>());
    for(i=0;i<k;i++) luck+=c_one[i];
    for(i=k;i<one;i++) luck-=c_one[i];

    cout << luck;
}