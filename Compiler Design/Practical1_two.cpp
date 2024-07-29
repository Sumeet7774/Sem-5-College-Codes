#include <bits/stdc++.h>
#include <fstream>
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
    ofstream file("practical1_input.txt");
    string input;

    cout<<"Enter input: ";
    cin>>input;

    file<<input<<endl;
    file.close();

    ifstream inputFile("practical1_input.txt");

    string line;
    string totalline;

    cout<<"Input is: ";
    while(getline(inputFile, line))
    {
        cout<<line;
        totalline = totalline + line;
    }
    cout<<endl;

    if(totalline.empty())
    {
        cout << "Error: Input string is empty!" << endl;
        return 1;
    }

    inputFile.close();

    vector<string> keywordsList = {"int", "float", "double", "string", "char", "break", "catch", "for", "while", "class", "return", "goto"};
    vector<string> variablesList = {"var1", "temp", "arr", "name","a", "b"};
    vector<char> operatorsAndSpecialSymbolsList = {'+', '-', '/', '&', '*', '%', '!', '=', '(', ')' ,'1', '2', '3', '4', '5', '6','7', '8', '9', '0'};

    cout<<endl<<endl;

    vector<string> keywords = findKeywords(totalline, keywordsList);
    vector<string> variables = findVariables(totalline, variablesList);
    vector<char> operators = findOperators(totalline, operatorsAndSpecialSymbolsList);

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