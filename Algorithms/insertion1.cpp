#include <bits/stdc++.h>
using namespace std;

int n,t,flag=0;

void print(int arr[],int s)
{
    int i;
    for(i=0;i<s;i++)
    cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    cin >> n;
    int arr[n],i;
    for(i=0;i<n;i++)
    cin >> arr[i];
    t=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>t)
        arr[i+1]=arr[i];
        else
        {
            arr[i+1]=t;
            flag=1;
        }
        print(arr,n);
        if(flag==1)
        break;
    }
    if(flag==0)
    {
        arr[0]=t;
        print(arr,n);
    }
}