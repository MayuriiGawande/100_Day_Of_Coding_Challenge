#include<iostream>
using namespace std;
/*
Print pattern
***
***
***
*/
int main()
{
    int n;
    cin>>n;

    int i=1;
   //to print row
    while(i<=n)
    {
        int j=1;

   // to print coloumn
        while(j<=n)
        {
          cout<<"*";
          j=j+1;  
        }
   
       cout<<endl;
        

        i=i+1;
    }
}