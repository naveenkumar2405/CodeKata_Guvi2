#include <iostream>
using namespace std;
int main()
{
    int n,n1,num,n2,r,sum=0;
    cin>>n1>>n2;
    for(int i=n1;i<n2-1;i++)
    {
        n=i+1;
        num=n;
        while(n>0)
        {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
         if(num==sum)
         {
             cout<<sum<<" ";
         }
         sum=0;
        }

    return 0;
}
