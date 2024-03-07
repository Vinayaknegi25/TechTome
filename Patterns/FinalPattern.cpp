#include <iostream>
using namespace std;
int main()
{
    int space=4;
    int n=4;
    int val=1;
    for(int i=1;i<=4;i++)
    {
        val=1;
        for(int j=1;j<space;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=n-space;k++)
        {
            cout<<val;
            val++;
        }
        if(val-1>1)
        {
            while(val>2)
            {
                val--;
                cout<<val-1;
            }
        }
        cout<<endl;
        space--;
    }
}