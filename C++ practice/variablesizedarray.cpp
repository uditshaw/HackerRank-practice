#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,x,y,index=0;
    cin >> n >> q;
    int *arr[n];
    while(n--)
    {
        int a,i;
        cin >> a;
        arr[index]=new int[a];
        for(i=0;i<a;i++)
        cin >> arr[index][i];
        index++;
    }
    while(q--)
    {
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
}