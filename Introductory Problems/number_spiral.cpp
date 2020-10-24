#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        auto result = ((i*(i-3)+4)*(i+4)*(i-1))/2;
        cout<<result<<endl;
    }
}