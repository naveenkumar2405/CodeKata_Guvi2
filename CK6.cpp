#include <iostream>
using namespace std;
//
int main()
{
    int n,from,to,count=0,j=1, k;
    cin>>from>>to;
    for(int i=from;i<to;i++)
    {
        n=i+1;
        for(k=1;k<=n;k++)
        {
            if(n%k==0)
            {
                count++;
            }

        }
        if(count==2)
            {
                cout<<n<<" ";
            }
        count=0;
    }

    return 0;
}
