#include <bits/stdc++.h>
using namespace std;

pair<char,char> splitString(vector<char> alphabets, string plaintext)
{
}




int main()
{
    int rows=5;
    int cols=5;

    int matrix[rows][cols];
    vector<char> alphabets = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    string plaintext;
    cout<<"Enter plaintext: "; 
    getline(cin,plaintext);

    set<char> uniqueValues;

    for(int i=0; i<plaintext.size(); i++)
    {
        uniqueValues.insert(plaintext[i]);
    }
















    return 0;
}