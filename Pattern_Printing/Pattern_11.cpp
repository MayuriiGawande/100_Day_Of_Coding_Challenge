#include<iostream>
using namespace std;
/*
Print Pattern     1
                  21
                  321
                  4321
*/ 

int main()
{
    int n;
    cin>>n;
    

    int row=1;
    //To print row
    while(row<=n)
    {
       int col=1;
       int val =row;
       //to print coloumn
       while(col<=row)
       {
        cout<<val;
        val--;
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }

}