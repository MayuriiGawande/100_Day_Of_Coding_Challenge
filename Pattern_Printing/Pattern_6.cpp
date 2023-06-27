#include<iostream>
using namespace std;
/*
Print Pattern
123
456
789
*/ 

int main()
{
    int n;
    cin>>n;

    int count = 0;

    int i=1;
    while(i<=n)
    {
        int j = 1;

        while(j<=n)
        {
            count++;
            cout<<count;
            j=j+1;
        }

        cout<<endl;
        i=i+1;
    }
}