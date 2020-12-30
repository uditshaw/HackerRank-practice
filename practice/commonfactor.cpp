#include <iostream>
using namespace std;
int main()
{
    int i,n,minm,j,c;
    cin >> n;
    int arr[n];
    cout << "Enter Array elements:-\n";
    for(i=0;i<n;i++)
    cin >> arr[i];
    minm = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<minm)
        minm = arr[i];
    }
    for(i=1;i<=minm;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            c++;
        }
        if(c==n)
        cout << i <<" ";
    }
}