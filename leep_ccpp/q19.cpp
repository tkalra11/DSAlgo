#include <iostream>
using namespace std;
int main()
{
        string n,rev;
        cout << "Enter a number : ";
        cin >> n;
        for(int i=n.length()-1;i>=0;--i)
        {
                rev += n.at(i);
        }
        if(n == rev)
        cout << n << " is an armstrong number";
        else
        cout << n << " is not an armstrong number";
        return 0;
}