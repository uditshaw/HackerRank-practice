#include <bits/stdc++.h>
using namespace std;

int sum=0,i,steps,v=0;
char ch;

int main()
{
    cin >> steps;
    for(i=0;i<steps;i++)
    {
        cin >> ch;
        if(ch=='U')
        {
            if(++sum==0) v++;
        }
        else if(ch=='D')
        sum--;
    }
    cout << v;
}