#include <iostream>
using namespace std;
int main()
{
    char a;
    int b=65;
    
    for(int i=0;i<3;i++)
    {
        a=b;
        for(int j=0;j<3;j++)
        {
            cout<<a;
        }
        b++;
        cout<<endl;
        
    }
}