#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,x,index,n,k,c=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=1;i<n;i++)
    {
        x=arr[i];
        index=i;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>x)
            {
                arr[index]=arr[j];
                arr[j]=x;
                index=j;
                c++;
            }
        }
        // for(k=0;k<n;k++)
        // cout << arr[k]<<" ";
        // cout << endl;
    }
    cout << c;
    
}