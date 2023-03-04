#include <iostream>
using namespace std;
int main()
{
        long fact=1;
        int num;
        cout << "Enter a number : ";
        cin >> num;
        for(;num>1;--num){
                fact*=num;
        }
        cout << "Factorial is " << fact;
        return 0;
}