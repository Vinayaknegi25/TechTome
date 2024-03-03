#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        k=i+1;
        for(int j=n;j>=i;j--)
        {
            if(i>=j)
            {
                while(k!=0)
                {
                    cout<<"*";
                    k--;
                }
            }   
            else
                cout<< " "; 
        }
        cout<<endl;
    }
}