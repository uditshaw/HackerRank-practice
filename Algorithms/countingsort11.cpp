// Code is correct according to the constraints and is successfully submitted.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,maxm=0;
    cin >> n;
    int x,result[100]={};
    for(i=0;i<n;i++)
    {
        cin >> x;
        result[x]++;
    }
    //int size=*(&result + 1) - result;
    for(i=0;i<100;i++)
    cout << result[i] << " ";
}