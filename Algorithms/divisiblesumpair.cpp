#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k,c=0;
    cin >> n >> k;
    int ar[n];
    for(i=0;i<n;i++)
    cin >> ar[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])%k==0)
            c++;
        }
    }
    cout << c;
}