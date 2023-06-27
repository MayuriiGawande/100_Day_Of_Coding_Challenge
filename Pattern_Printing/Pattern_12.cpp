#include<iostream>
using namespace std;
/*
Print Pattern     AAA
                  BBB
                  CCC
                  DDD

Use the formula to print the characters
'A'+row-1

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
        char ch='A'+row-1;
        cout<<ch;
        col++;

       }
       cout<<endl;
       row=row+1;
    }

}