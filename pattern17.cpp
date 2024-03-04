#include <iostream>
using namespace std;
int main()
{
    int k=4;
    int space=0;
    int val=1;
    int flag=3;
    for(int i=1; i<=4; i++)
    {
        val=i;
        space=i-1;
        while(k>0)
        {
            while(space!=0)
            {
                cout<< " ";
                space--;
            }
            cout<<val;
            val++;
            k--;
        }
        k=flag;
        flag--;
        cout<<endl;
    }
}