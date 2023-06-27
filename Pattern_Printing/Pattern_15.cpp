#include<iostream>
using namespace std;
/*
Print Pattern     ABC
                  BCD
                  CDE
char ch = 'A'+row+col-2;
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
       
       while(col<=n)
       {
        char ch = 'A'+row+col-2;
        cout<<ch;
        col=col+1;

       }
       cout<<endl;
       row=row+1;
    }

}