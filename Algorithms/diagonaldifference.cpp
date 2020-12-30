#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,i,j,s1=0,s2=0;
    cin >> n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin >> arr[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            s1 = s1+arr[i][j];
            if(i+j==n-1)
            s2 = s2+arr[i][j];
        }
    }
    cout << abs(s1-s2);
}