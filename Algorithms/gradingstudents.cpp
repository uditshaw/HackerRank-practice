#include <iostream>
using namespace std;
int main()
{
    int i,n,d;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    cin >> a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>=38)
        {
            d= a[i]%5;
            if(d == 3 || d==4)
            a[i]+=5-d;
        }
        cout << a[i] <<endl;
    }
}