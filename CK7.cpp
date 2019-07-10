#include <iostream>
using namespace std;
int main()
{
  int n, num, rem, sum = 0;
  cin >> n;
  num = n;
  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }
  if(sum == n)
    cout << "yes";
  else
    cout << "no";
  return 0;
}
