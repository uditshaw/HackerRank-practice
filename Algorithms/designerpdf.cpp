#include <bits/stdc++.h>
using namespace std;

int i,maxm=0;
int alpha[26];
string word;

int main()
{
    for(i=0;i<26;i++)
    cin >> alpha[i];
    cin.ignore();
    getline(cin,word);
    maxm=alpha[(word[0]-97)];
    for(i=0;i<word.length();i++)
    {
        if(alpha[(word[i]-97)]>maxm)
        maxm=alpha[(word[i]-97)];
    }
    
    cout << maxm * word.length();
}