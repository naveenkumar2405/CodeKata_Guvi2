#include <iostream>
using namespace std;
int main()
{
    int n,n1,n2,i;
    cin>>n1>>n2;
    for(i=n1;i<n2-1;i++)
    {
         n=i+1;
        if(n%2!=0)
        {
            cout <<n<<" ";
        }
        }
    return 0;
}
