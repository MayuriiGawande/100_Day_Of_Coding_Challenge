#include<iostream>
using namespace std;
/*
Print Pattern     A
                  BC
                  DEF
                  GHIF
*/ 

int main()
{
    int n;
    cin>>n;
    

    int row=1;

    char ch = 'A';
    
    //To print row
    while(row<=n)
    {
       int col=1;
       //to print coloumn
       
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