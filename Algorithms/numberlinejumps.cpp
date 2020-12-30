#include <iostream>
using namespace std;
int main()
{
    int i, x1,x2,v1,v2,d;
    cin >> x1 >>v1 >> x2 >> v2;
    d = x2 - x1;
    for(i=0;;i++)
    {
        if(x1 == x2)
        {
            cout << "YES"; break;
        }
        x1+=v1;x2+=v2;
        if(x2-x1>d || x1>x2)
        {
            cout << "NO";break;
        }
    }
}