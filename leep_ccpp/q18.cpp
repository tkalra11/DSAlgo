#include <iostream>
using namespace std;
int main()
{
        int n,sum=0;
        cout << "Enter a number : ";
        cin >> n;
        for(int i=1;i<=n/2;++i)
        {
                if(n%i == 0 )
                sum+=i;
        }
        if(n == sum)
        cout << n << " is a perfect number";
        else 
        cout << n << " is not a perfect number";
        return 0;
}