#include<iostream>
using namespace std;
/*
Print Pattern    ****
                 ***
                 **
                 *
*/ 

int main()
{
    int n;
    cin>>n;
    
    int row = 0;
    

    while(row<=n)
    {
          int col = 1;

          while(col<=n-row)
          {
            cout<<"*";
            col++;
          }

          cout<<endl;
          row++;
    }
}