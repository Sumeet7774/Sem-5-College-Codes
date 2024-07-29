#include <bits/stdc++.h>
using namespace std;

vector<string> findKeywords(string s,vector<string> arr)
{
    vector<string> keywords;

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

    return keywords;
}

vector<string> findVariables(string s, vector<string> arr)
{
    vector<string> variables;

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

    return variables;
}

vector<char> findOperators(string s, vector<char> arr)
{
    vector<char> operators;

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            if(arr[j] == s[i])
            {
                operators.push_back(arr[j]);
            }
        }
    }

    return operators;
}


int main()
{
    vector<string> keywordsList = {"int", "float", "double", "string", "char", "break", "catch", "for", "while", "class", "return", "goto", };
    vector<string> variablesList = {"var1", "temp", "arr", "name"};
    vector<char> operatorsList = {'+', '-', '/', '&', '*', '%', '!', '='};

    string s;
    cout<<"Enter string: ";
    cin>>s;

    vector<string> keywords = findKeywords(s, keywordsList);
    vector<string> variables = findVariables(s, variablesList);
    vector<char> operators = findOperators(s, operatorsList);

    if(keywords.size()!=0)
    {
        cout<<"Keywords are: ";

        for(int i=0; i<keywords.size(); i++)
        {
            cout<<keywords[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }


    if(variables.size()!=0)
    {
        cout<<"Variables are: ";

        for(int i=0; i<variables.size(); i++)
        {
            cout<<variables[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    if(operators.size()!=0)
    {
        cout<<"Operators are: ";

        for(int i=0; i<operators.size(); i++)
        {
            cout<<operators[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    return 0;
}