#include<iostream>
using namespace std;
/*
Print Dabangg Pattern
      1234554321
      1234**4321
      123****321
      12******21
      1********1
*/
int main()
{
     int n,i=1;
    cin>>n;

      
      //first triangle 

      while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;

        }


            //second triangle(half of stars ke liye)

            int star1=i-1;
            while(star1){
                cout<<"*";
                star1=star1-1;
            }


             //third triangle(rest of stars ke liye)

             int star2=i-1;
             while(star2){
                cout<<"*";
                star2=star2-1;
             }


             // last triangle

             int start=j-1;
             while(start){
                cout<<start;
                start=start-1;
             }
              
        cout<<endl;
        i=i+1;

    }
}