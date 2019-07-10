#include <iostream>
using namespace std;
int main()
{
    int num, i, rev;
    cin>>num;
    rev = num;
    for(i=0; num>0; num=num/10)
    {
        i = i * 10;
        i = i + (num%10);
    }
    if(rev == i)
       cout << "yes";
    else
        cout << "no";
   return 0;
}
