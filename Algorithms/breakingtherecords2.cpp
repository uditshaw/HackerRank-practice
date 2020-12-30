#include <iostream>
using namespace std;
int main()
{
    int minm = 0,maxm = 0,i,j,n, c1 =0 , c2 =0;
    cin >> n;
    int arr[n], res[2];
    for(i=0;i<n;i++)
    cin >> arr[i];
    minm = maxm = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<minm)
        {minm = arr[i];c1++;}
        if(arr[i]>maxm)
        {maxm = arr[i];c2++;}
    }
    cout << c2 << " "<<c1;
}