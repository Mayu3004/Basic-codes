//wap to check for vowels

#include<iostream>
using namespace std;

int main()
{
 char c;
 cout<<"Enter the character to check for vowels: "<<endl;
 cin>>c;

if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
 cout<<"The entered character "<<c<<" is vowel"<<endl;
}
else
{
 cout<<"The character "<<c<<" is consonant"<<endl;
}
}