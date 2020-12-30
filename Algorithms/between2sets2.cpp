#include <iostream>
using namespace std;
int main()
{
    int n,m,minm,i,j,c=0,k=0,c1=0, c2=0;
    cin >> n >>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    cin >> a[i];
    for(i=0;i<m;i++)
    cin >> b[i];
    minm = b[0];
    for(i=0;i<m;i++)
    {
        if(b[i]<minm)
        minm = b[i];
    }
    for(i=1;i<=minm;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(b[j]%i==0)
            c++;
        }
        if(c==m)
        {c1=0;
            for(k=0;k<n;k++)
            {
                if(i%a[k]==0)
                c1++;
            }
            if(c1==n)
            c2++;
        }
    }
    cout << c2;
}