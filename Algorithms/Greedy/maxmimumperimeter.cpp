#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    long long max_peri=0,sum=0;
    cin >> n;
    bool flag=false;
    int arr[n],tri[3]={};
    for(i=0;i<n;i++) cin>> arr[i];
    
    sort(arr,arr+n);
    for(i=0;i<n;i++) cout << endl << arr[i];
    for(i=0;i<n-2;i++)
    {sum=0;
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            cout << "Sum = " << sum << endl;cout << "Arr[i] = " << arr[i] << endl;
            sum=arr[i]+arr[i+1]+arr[i+2];flag=true;cout << "Sum = " << sum << endl;
            if(sum>max_peri)
            {
                cout << "Entered/n";
                tri[0]=arr[i];tri[1]=arr[i+1];tri[2]=arr[i+2];
                max_peri=sum;
            }
        }

    }
    if(flag)
    cout << tri[0] << " " << tri[1] << " " << tri[2];
    else cout << -1;
}