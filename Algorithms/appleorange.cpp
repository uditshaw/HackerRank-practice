// Time Exceeded, Optimize this code.
#include <iostream>
using namespace std;
int main()
{
    int s,t,m,n,a,b,i,c1=0,c2=0,j;
    cin >> s>>t>>a>>b>>m>>n;
    int apple[m],orrange[n];
    for(i=0;i<m;i++)
    {cin >> apple[i];apple[i]+=a;}
    for(i=0;i<n;i++)
    {cin >> orrange[i];orrange[i]+=b;}
    for(i=s;i<=t;i++)
    {
        for(j=0;j<m;j++)
        {
            if(apple[j]==i)
            c1++;
        }
        for(j=0;j<n;j++)
        {
            if(orrange[j]==i)
            c2++;
        }
    }
    cout << c1 << endl << c2;
}