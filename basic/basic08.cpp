//wap to cheeck wheter the enter alphabet is in uppercase of lower case

#include<iostream>
using namespace std;

int main()
{
 char chr;
 cout<<"Enter the character to check for upper or lowercase: "<<endl;
 cin>>chr;

 if(chr>=65 && chr<=90)
 {
  cout<<"Enter charachter "<<chr<<" is UPPERCASE"<<endl;
 }
 else
{
 cout<<"Enter char "<<chr<<" is lowercase"<<endl;
}
}