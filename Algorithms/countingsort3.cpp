#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,c=0;
    cin >> n;
    string word;
    int result[100]={};
    while(n--)
    {
        cin >> x;
        result[x]++;
        cin.ignore();
        getline(cin,word);
    }
    for(i=0;i<100;i++)
    {
        c+=result[i];cout << c << " ";
    }
}