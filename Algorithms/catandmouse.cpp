#include <bits/stdc++.h>
using namespace std;

int q,x,y,z,i;

int main()
{
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> x >> y >> z;
        if(abs(z-x)<abs(z-y))
        cout << "Cat A";
        else if(abs(z-x)>abs(z-y))
        cout << "Cat B" << endl;
        else cout << "Mouse C" <<endl;

    }
}
