#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum;
    long int max_peri=0;
    cin >> n;
    bool flag=false;
    int arr[n],tri[3]={};
    for(i=0;i<n;i++) cin>> arr[i];
    sort(arr,arr+n);
    for(i=0;i<n-2;i++)
    {sum=0;
        if(arr[i]+arr[i+1]>arr[i+2])
        {
            sum+=arr[i]+arr[i+1]+arr[i+2];flag=true;
            if(sum>max_peri)
            {
                tri[0]=arr[i];tri[1]=arr[i+1];tri[2]=arr[i+2];
                max_peri=sum;
            }
            else if(sum==max_peri)
            {
                if(arr[i+2]>tri[2])
                {tri[0]=arr[i];tri[1]=arr[i+1];tri[2]=arr[i+2];}
                else if(arr[i+2]==tri[2])
                {
                    if(arr[i]>=tri[i])
                    {tri[0]=arr[i];tri[1]=arr[i+1];tri[2]=arr[i+2];}
                }
            }
        }

    }
    if(flag)
    cout << tri[0] << " " << tri[1] << " " << tri[2];
    else cout << -1;
}