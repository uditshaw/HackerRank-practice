#include <iostream>
using namespace std;

int * compareTriplets(int *a, int *b)
{
    static int res[2];
    int i;
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            res[0]++;
        else if(*(a+i)<*(b+i))
            res[1]++;
    }
    return res;
}
int main()
{
    int i;
    int a[3],b[3],*r;
    for(i=0;i<3;i++)
    cin >> a[i];
    for(i=0;i<3;i++)
    cin >> b[i];
    r = compareTriplets(a,b);
    cout << r[0] << " " << r[1];

}