#include<iostream>

using namespace std;

int main()
{
    int n, a,b;

    cout<<"Enter first no = ";
    cin>>a;
    cout<<"Enter 2nd no = ";
    cin>>b;
     if(a>b)
    {
        while(n != 0)
        {
        n = a%b ;
        if(n == 0)
            break;
        a = b;
        b = n;
        
        }    
   
cout<<"\nHcf of two nos = "<<b;
    }
     else
    {
        while(n != 0)
        {
        n = b%a ;
        if(n == 0)
            break;
        b = a;
        a = n;
        
        } 
 
cout<<"\nHcf of two no = "<<a;
    }  

}
