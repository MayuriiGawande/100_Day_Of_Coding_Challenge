#include<iostream>
using namespace std;
/*
Print Pattern    1111
                  222
                   33
                    4
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

        //to print pattern

        int col = 1;

        while(col<=n-row+1)
        {
          cout<<row;
          col=col+1;  
        }

        cout<<endl;
        row=row+1;

    }
}