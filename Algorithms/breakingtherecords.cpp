#include <iostream>
using namespace std;
int * breakingRecords(int arr[])
{
    static int res[2];
    int minm,maxm,size,i;
    minm = maxm = arr[0];
    cout << "1st valuse: "<<arr[0]<<endl;
    size = *(&arr + 1) -arr;
    for(i=1;i<size;i++)
    {
        cout << arr[i]<< endl;
        if(arr[i]>maxm)
        {res[0]++;maxm = arr[i];}
        if(arr[i]<minm)
        {res[1]++; minm = arr[i];}
    }
    cout << res[0] << res[1] << endl;
    return res;
}
int main()
{
    // int a[] = {2,4};
    // score = a;
    // cout << *(score) << " " << *(score+1);

    int minm,maxm,i,j,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    cin >> arr[i];
    int *score;
    score = breakingRecords(arr);
    cout << *score << " "<< *(score + 1);
}