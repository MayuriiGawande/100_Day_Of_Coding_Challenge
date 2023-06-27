#include<iostream>
using namespace std;
/*
Print Pattern     1
                  23
                  456
                  78910
*/ 

int main()
{
    int n;
    cin>>n;
    int count=0;

    int row=1;
    while(row<=n)
    {
       int col=1;
       while(col<=row)
       {
        count++;
        cout<<count;
        col=col+1;
       }
       cout<<endl;
       row=row+1;
    }

}