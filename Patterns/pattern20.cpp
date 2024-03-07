#include <iostream>
using namespace std;
int main()
{
    int space=0;
    int n=4;
    for(int i=1;i<=4;i++)
    {
        for(int j=0;j<space;j++)
            cout<<" ";
        for(int k=1;k<=n-space;k++)
        {
            cout<<i;
        }
        cout<<endl;
        space++;
    }
}