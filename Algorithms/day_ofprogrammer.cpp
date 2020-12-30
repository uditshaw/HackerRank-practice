#include <bits/stdc++.h>
using namespace std;

const int d=256;
int days[]={31,29,31,30,31,30,31,31,30,31,30,31};
int y,sum=0,i;

int main()
{
    cin >> y;
    if(y>=1700 && y<=1917)
    {
        if(y%4==0) days[1]=29;
        else days[1]=28;
    }
    else if(y>1918)
    {
        if((y%400==0)||(y%4==0 && y%100!=0)) days[1]=29;
        else days[1]=28;
    }
    else if(y==1918) days[1]=15;
    while(sum<d)
    sum+=days[i++];
    sum-=days[i-1];
    
    cout << d-sum << ".0"<<i<<"."<<y<<endl;
}