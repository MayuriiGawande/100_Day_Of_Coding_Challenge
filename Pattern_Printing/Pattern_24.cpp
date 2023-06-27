#include<iostream>
using namespace std;
/*
Print Pattern     1
                 22
                333
               4444
*/ 

int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    

    while(row<=n)
    {
        //to print the space
        int space = n-row;

        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //to print pattern

        int col = 1;

        while(col<=row)
        {
          cout<<row;
          col=col+1;  
        }

        cout<<endl;
        row=row+1;

    }
}