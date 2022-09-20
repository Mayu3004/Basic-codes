// Write the program to print the values and the size of them taking input  from users 
// num=10
// chr's' 
// re= 55.20
// rsmoney= 542154313480.544543

#include<iostream>
using namespace std;

int main()
{
 int num;
 char chr;
 float rs;
  double rsMoney;

  cout<<"Enter the value of number: "<<endl;
  cin>>num;
  cout<<"Enter the number of the character: "<<endl;
  cin>>chr;
  cout<<"Enter the value of float: "<<endl;
  cin>>rs;
  cout<<"Enter the value of the double: "<<endl;
  cin>>rsMoney;

  //printing of the screen

  cout<<"The  value of the number is: "<<num<<endl;
  cout<<"The  value of the character is: "<<chr<<endl;
  cout<<"The  value of the float is: "<<rs<<endl;
  cout<<"The  value of the double is: "<<rsMoney<<endl;
  cout<<"-------------------------------------------------"<<endl;

  //size of 
  cout<<"The  size  of the number is: "<<sizeof(num)<<endl;
  cout<<"The  size  of the character is: "<<sizeof(chr)<<endl;
  cout<<"The  size  of the float is: "<<sizeof(rs)<<endl;
  cout<<"The  size  of the double is: "<<sizeof(rsMoney)<<endl;
}

