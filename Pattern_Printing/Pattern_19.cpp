#include<iostream>
using namespace std;
/*
Print Pattern     D
                  CD
                  BCD
                  ABCD

Formula: 'A'+n-row
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
       //to print coloumn
       
       char ch = 'A'+n-row;
       while(col<=row)
       {
        cout<<ch;
        ch++;
        col=col+1;

       }
       cout<<endl;
       row=row+1;
    }

}