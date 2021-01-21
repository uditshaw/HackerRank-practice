#include <bits/stdc++.h>
using namespace std;

class Box
{
    int l,b,h;
    public:
    Box()
    {l=b=h=0;}
    Box(int length=0, int breadth=0, int height=0)
    {l=length;b=breadth;h=height;}
    Box(const Box &B)
    {l=B.l;b=B.b;h=B.h;}
    int getLength()
    {return l;}
    int getBreadth()
    {return b;}
    int getHeight()
    {return h;}
    long long CalculateVolume()
    {return l*b*h;}

    bool operator< (const Box &B)
    {
        if(l<B.l) return true;

        else if(l==B.l && b<B.b) return true;
        else if(l==B.l && b==B.b && h<B.h) return true;

        else return false;
    }
    friend ostream & operator<< (ostream &out, const Box &B);
};
ostream & operator<< (ostream &out, const Box &B)
{out << B.l << " " << B.b << " "<< B.h<<endl;return out;}