#include <iostream>
using namespace std;
int main()
{
    int k;
    int flag;
    for(int i=1;i<=4;i++)
    {
        k=i;
        flag=1;
        for(int j=4;j>=1;j--)
        { 
            if(flag<i)
            {
                while(flag<i)
                {
                    cout<<" ";
                    flag++;
                }
            }   
            while(k<=j)
            {
                cout<<i;
                k++;
            }  
               
        }
        cout<<endl;
    }
}