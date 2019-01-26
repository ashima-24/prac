#include<iostream>

using namespace std;

int main()
{
int rem, val,n;
cout<<"Enter the no which you want to do the reverse = ";
cin>>n;
cout<<"\n";
while(n != 0)
{
  rem = n % 10;
  cout<<rem;
  n = n / 10;

}


}
