//Wrong Algorithm!
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int i,n,k=0,temp,tempc=1,c=1,j,minm;
    cin >> n;
    int arr[n], *array=NULL;
    if(array!=NULL)
    cout << "Array not null\n";
    for(i=0;i<n;i++)
    cin >> arr[i];
    for(i=0;i<n;i++)
    {
        temp=arr[i],tempc=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==temp)
            tempc++;
        }
        if(tempc == c)
        {
            array = (int*)malloc(sizeof(int));
            array[k++] = temp;
            cout << array[k-1] << " ";
        }
        else if(tempc>c)
        {
            c=tempc;
            minm = temp;
            if(array!=NULL)
            {
                delete[] array;k=0;
                int *array;
            }
        }
    }
    if(k>0)
    minm = *(array);
    cout << " "<<*(array+0) << " " <<*(array+4);
    if(array==NULL)
    cout << "\n Array doesnot exists!\n";
    // for(i=1;i<k;i++)
    // {
    //     if(array[i]<minm)
    //     minm = array[i];
    // }
    cout << " Printing last minm: " << minm;
}