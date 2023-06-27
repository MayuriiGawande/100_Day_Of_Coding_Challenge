#include<iostream>
using namespace std;
/*
print pattern
       1
      121
     12321
    1234321
*/
int main()
{
    int n;
    cin>>n;
    
    int row = 1;
    

    while(row<=n)
    {
        //to print the first triangle
        int space = n-row;

        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //to print the second triangle

        int col = 1;
        while(col<=row)
        {
          cout<<col;
          col=col+1;  
        }

        int start = row-1;
        while(start)
        {
            cout<<start;
            start = start-1;
        }
        cout<<endl;
        row=row+1;

    }
}