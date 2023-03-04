#include <iostream>
using namespace std;
int main()
{
        string str="10101";
        for(int i=0;i<str.length();++i){
                for(int j=0;j<=i;++j){
                        cout << str.at(j);
                }
                cout<<endl;
        }
        return 0;
}