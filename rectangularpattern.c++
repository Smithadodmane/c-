#include<iostream>
using namespace std;

int main()
{
    int rows,col,i,j;
    cout<<"enter the rows:\n";
    cin>>rows;
    cout<<"enter the col:\n";
    cin>>col;

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=col;j++)
        {
          cout<<"*";
        }
        cout<<"\n";
    }
}