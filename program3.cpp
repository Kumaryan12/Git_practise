#include <iostream>
using namespace std;
 
int fac(int a){
    int ans;
    for (int i=1; i<=a; i++)
    {
        ans=i*i;
    }
    return ans;
}
int main()
{
    cout<<("the factorial of the given numbers is %d", fac(5));
    return 0;
}

