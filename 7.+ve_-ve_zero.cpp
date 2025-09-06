#include <iostream>
#include<string>
using namespace std;

int main() 
{
    int a;
    
    cout<<"enter the number:";
    cin>>a;
    
    
   if(a<0)
   {
       cout<<"the given number is -ve!";
   }
   else if(a>0)
   {
       cout<<"the given number is +ve";
   }
   
   else
   {
       cout<<"the given number is zero";
   }


}
