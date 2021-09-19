// A program to check if a letter is a vowel or a consonant
#include<iostream>
using namespace std;

int main()
{
    char letter;
    cout<<"Enter a letter "<<endl;
    cin>>letter;
    switch(letter)
    {
    case 'a':
        cout<<"This is a vowel ";
        break;

    case 'e':
        cout<<"This is a vowel ";
        break;
    
    case 'i':
        cout<<"This is a vowel ";
        break;
    
    case 'o':
        cout<<"This is a vowel ";
        break;
    
    case 'u':
        cout<<"This is a vowel ";
        break;

    default:
        cout<<"This is a consonant";
        break;
    
    }
       return 0;
}