#include <bits/stdc++.h>
using namespace std;

vector<string> findKeywords(string s,vector<string> arr, vector<string> keywords)
{
    for(int i=0; i<arr.size(); i++)
    {
        int size = arr[i].size();
    
        for(int j=0; j<=s.size()-size; j++)
        {
            if(s.substr(j,size)==arr[i])
            {
                keywords.push_back(arr[i]);
            }
        }
    }
}

vector<string> findVariables(string s, vector<string> arr, vector<string> variables)
{
    for(int i=0; i<arr.size(); i++)
    {
        int size = arr[i].size();
    
        for(int j=0; j<=s.size()-size; j++)
        {
            if(s.substr(j,size)==arr[i])
            {
                variables.push_back(arr[i]);
            }
        }
    }
}

vector<string> findOperators(string s, vector<string> arr, vector<string> operators)
{
    for(int i=0; i<arr.size(); i++)
    {
        int size = arr[i].size();
    
        for(int j=0; j<=s.size()-size; j++)
        {
            if(s.substr(j,size)==arr[i])
            {
                operators.push_back(arr[i]);
            }
        }
    }
}


int main()
{
    vector<string> arr = {"int", "float", "double", "string", "char", "break", "catch", "for", "while", "class", "return", "goto", "a", "b", "c", "var1", "temp", "arr", "s", "+", "-", "/", "&", "*", "%", "!", "="};
    vector<string> keywords;
    vector<string> variables;
    vector<string> operators;

    string s;
    cout<<"Enter string: ";
    cin>>s;


    if(keywords.size()!=0)
    {
        for(int i=0; i<keywords.size(); i++)
        {
            cout<<keywords[i]<<endl;
        }
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}