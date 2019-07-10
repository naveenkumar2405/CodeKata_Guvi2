#include <iostream>
using namespace std;
int main()
{
    int num,in,en;
    cin>>in>>en;
    for(int i=in;i<en-1;i++)
    {
        num=i+1;
        if(num%2==0)
        {
            cout <<num<<" ";
        }
        }
    return 0;
}
