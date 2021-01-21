#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;

    Item(int value, int weight) : value(value), weight (weight)
    {}
};
bool compare(Item a, Item b)
{
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;
    return r1>r2;
}
double fractionalKanpsack(struct Item arr[], int W, int size)
{
    sort(arr,arr+size,compare);

    int curweight=0;
    double finalvalue=0.0;

    for(int i=0;i<size;i++)
    {
        if((curweight+arr[i].weight)<=W)
        {
            curweight+=arr[i].weight; finalvalue+=arr[i].value;
        }
        else
        {
            int remaining=W-curweight;
            finalvalue+=arr[i].value*(double)remaining/arr[i].weight;
            break;
        }
    }
    return finalvalue;
}
int main()
{
    int W=60;
    Item arr[]={{100,10},{280, 40 }, { 120, 20 }, { 120, 24 }};
    int size=*(&arr +1) -arr;
    cout << "Maximum profit earned = " << fractionalKanpsack(arr,W,size);

}