#include <iostream>
using namespace std;
int main()
{
    int k;
    for(int i=1;i<=4;i++)
    {
        k=i;
        for(int j=0;j<4;j++)
        {
            while(k>0)
            {
                cout<<k;
                k--;
            }
        }
        cout<<endl;
    }
}