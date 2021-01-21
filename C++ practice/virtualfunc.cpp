#include <bits/stdc++.h>
using namespace std;
static int c=1,c1=1;
class Person{
    protected:
    char name[100];
    int age;
    public:
    virtual void getdata(){}
    virtual void putdata(){}
};
class Professor: public Person
{
    int publications,pcur_id;
    public:
    void getdata()
    {
        cin >> name;
        cin >> age >> publications;
        pcur_id=c++;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << pcur_id << endl;
    }
};
class Student: public Person
{
    int marks[6],cur_id;
    public:
    void getdata()
    {
        cin >> name;
        cin >> age;
        for(int i=0;i<6;i++) cin >> marks[i];
        cur_id=c1++;
    }
    void putdata()
    {
        int i,s=0;
        cout << name << " " << age << " ";
        for(i=0;i<6;i++) s+=marks[i];
        cout << s << " " << cur_id<< endl;
    }
};
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
