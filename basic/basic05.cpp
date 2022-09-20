//wap to check the entered number is diviisble by 5 and 11

#include<iostream>

using namespace std;

int main()
{
 int m;
 cout <<"Enter the number to check for divisible for 5 and 11"<<endl;
 cin>>m;

 if(m%5==0&&m%11==0)
 {
  cout<<"Enter number "<<m<<" is divisible by 5 and 11"<<endl;

 }
 else{
  cout<<"Entered number "<<m<<" is not divisbile by 5 and 11"<<endl;
 }
}