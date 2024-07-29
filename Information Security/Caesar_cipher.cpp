#include <bits/stdc++.h>
using namespace std;

string encryption(string plainText, int key, vector<char> alphabets)
{
    string encryptedString="";
    int index;

    for(int i=0; i<plainText.size(); i++)
    {
        for(int j=0; j<alphabets.size(); j++)
        {
            char c = plainText[i];
            
            if(alphabets[j]==c)
            {
                index = j;    
            }
        }
        encryptedString = encryptedString + (alphabets[(key+index)%26]);
    }

    return encryptedString;
}

string decryption(string encryptedText, int key, vector<char> alphabets)
{
    string decryptedString="";
    int index;

    for(int i=0; i<encryptedText.size(); i++)
    {
        for(int j=0; j<alphabets.size(); j++)
        {
            char c = encryptedText[i];

            if(alphabets[j]==c)
            {
                index = j;    
            }
        }

        int newIndex = (index-key)%26;

        if(newIndex < 0)
        {
            newIndex = newIndex + 26;
        }

        decryptedString = decryptedString + (alphabets[newIndex]);
    }
    
    return decryptedString;
}

int main()
{
    string plainText;
    cout<<"Enter plaintext: ";
    cin>>plainText;

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    vector<char> smallAlphabets = {'a', 'b', 'c', 'd' ,'e' ,'f', 'g', 'h', 'i','j','k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> capitalAlphabets = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 

    bool isUpper = isupper(plainText[0]);

    if(isUpper==true)
    {
        string encrypt = encryption(plainText,key,capitalAlphabets);
        cout<<"Encrypted string is: "<<encrypt<<endl;
        string decrypt = decryption(encrypt,key,capitalAlphabets);
        cout<<"Decrypted string is: "<<decrypt<<endl;

    }
    else
    {
        string encrypt = encryption(plainText,key,smallAlphabets);
        cout<<"Encrypted string is: "<<encrypt<<endl;
        string decrypt = decryption(encrypt,key,smallAlphabets);
        cout<<"Decrypted string is: "<<decrypt<<endl;
    }

    return 0;
}