#include <bits/stdc++.h>
using namespace std;

struct Interval{
    int start, end;
};
bool compare(Interval A, Interval B)
{
    return (A.start > B.start);
}
int main()
{
    int n,k,i,luck=0;
    cin >> n >> k;
    int c[n][2];
    for(i=0;i<n;i++)
    {cin >> c[i][0] >> c[i][1];luck+=c[i][0];}

    sort(c,c+n,compare);

    for(i=0;i<n;i++)
    cout << c[i][0] << "\t" << c[i][1] <<endl;


}