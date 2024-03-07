#include <iostream>
using namespace std;
int main()
{
    int num=1;
    int h=4;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=h-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<num;
            num++;
        }
        
        cout<<endl;
    }
}