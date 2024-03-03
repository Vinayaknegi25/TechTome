#include <iostream>
using namespace std;
int main()
{
    int k;
    int flag;
    for(int i=1;i<=4;i++)
    {
        k=i;
        flag=0;
        for(int j=4;j>=1;j--)
        {
            while(j>k)
            {
                cout<<" ";
                k++;
                flag++;
            }
            if(flag!=4)
            {
                while(flag!=4)
                {
                    cout<<i;
                    flag++;
                }
            }
            
        }
        cout<<endl;
    }
}