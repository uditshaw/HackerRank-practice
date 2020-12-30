#include <iostream>
using namespace std;
int main()
{
    static int res[2];
    res[0]++;
    res[1]++;
    cout << res[0] << res[1];
}