#include <iostream>
using namespace std;
int main()
{
    int k;
    for(int i=1;i<=4;i++)
    {
        k=i;
        for(int j=4;j>=1;j--)
        {
            if(i>=j)
                while(k<=j)
                {
                    cout<<i;
                    k++;
                }
            else    
                cout<< " ";
        }
        cout<<endl;
    }
}