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

    int row=1;
    while(row<=n)
    {
       int col=1;
       while(col<=row)
       {
        cout<<row;
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }

}