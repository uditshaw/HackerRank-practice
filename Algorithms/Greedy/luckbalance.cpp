#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,luck=0;
    cin >> n >> k;
    int contest[2][n];

    for(i=0;i<n;i++)
    {cin >> contest[0][i] >> contest[1][i];
    luck+=contest[0][i];}
    
    //cout << luck << endl;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(contest[0][j]<contest[0][j+1])
            {
                int t1=contest[0][j];
                contest[0][j]=contest[0][j+1];
                contest[0][j+1]=t1;

                t1=contest[1][j];
                contest[1][j]=contest[1][j+1];
                contest[1][j+1]=t1;
            }
        }
    }

    /*for(i=0;i<n;i++)
    cout << contest[0][i] << " ";
    cout << endl;
    for(i=0;i<n;i++)
    cout << contest[1][i] << " ";
    cout << endl;*/


    for(i=0;i<n;i++)
    {
        if(contest[1][i]==1)
        k--;
        if(k<0)
        luck-=2*contest[0][i];
    }

    cout << luck << endl;

}