#include<iostream>
using namespace std;
/*
Print Pattern     ABC
                  ABC
                  ABC
                  ABC

Use the formula to print the characters
'A'+col-1

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
        char ch='A'+col-1;
        cout<<ch;
        col++;

       }
       cout<<endl;
       row=row+1;
    }

}