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
    
    int row = 1;
    

    while(row<=n)
    {
        //to print the space
        int space = row-1;

        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //to print star

        int col = 1;

        while(col<=n-row+1)
        {
          cout<<"*";
          col=col+1;  
        }

        cout<<endl;
        row=row+1;

    }
}