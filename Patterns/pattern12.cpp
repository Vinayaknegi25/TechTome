#include <iostream>
using namespace std;
int main()
{
    char ch=68;
    for(int i=0;i<4;i++)
    {
        ch=68;
        for(int j=0;j<=i;j++)
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}