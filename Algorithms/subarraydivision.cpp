#include <iostream>
using namespace std;
int main()
{
    int n,i,j,d,m,s=0,c=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    cin >> d >> m;
    for(i=0;i<=n-m;i++)
    {s=arr[i];
        for(j=1;j<m;j++)
        s+=arr[i+j];
        if(s==d)
        c++;
    }
    cout << c;
}