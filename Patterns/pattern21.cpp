#include <iostream>
using namespace std;
int main()
{
    int space = 4;
    int n=4;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<space;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=n-space;k++)
        {
            cout<<i;
            
        }
        space--;
        cout<<endl;
    }
}