#include<iostream>
using namespace std;
/*
Print Pattern     ABC
                  DEF
                  GHI
                  

We need to stored the character value inn the variable 
and then need to increment it

*/ 

int main()
{
    int n;
    cin>>n;
    

    int row=1;
    char ch='A';
    //To print row
    while(row<=n)
    {
       int col=1;
       //to print coloumn
       
       while(col<=n)
       {
        
        ch++;
        cout<<ch;
        col=col+1;

       }
       cout<<endl;
       row=row+1;
    }

}