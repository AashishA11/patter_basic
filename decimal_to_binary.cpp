#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i=31;i>=0;i--)
    {
        int k=n>>i;
        if(k&1)
        cout<<"1";
        cout<<"0";
    }
    return 0;
}
